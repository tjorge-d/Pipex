/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:29:40 by tjorge-d          #+#    #+#             */
/*   Updated: 2024/01/30 16:29:45 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	error_msg(char *str, t_cmd *cmd)
{
	char	*msg;

	msg = ft_strjoin(str, ": command not found\n");
	if (!msg)
	{
		pipes_closer(cmd, cmd[0].process_nb);
		free_n_exit(cmd);
	}
	write(2, msg, ft_strlen(msg));
	free(msg);
}

void	pipes_closer(t_cmd *cmd, int limit)
{
	int	i;

	i = -1;
	while (++i < limit)
	{
		close(cmd[i].fd[0]);
		close(cmd[i].fd[1]);
	}
}

void	pipe_creator(t_cmd *cmd)
{
	int	i;

	i = 0;
	while (++i < cmd[0].process_nb)
	{
		if (pipe(cmd[i].fd) == -1)
		{
			pipes_closer(cmd, i);
			free_n_exit(cmd);
		}
	}
}

static void	proccess_cmd(t_cmd *cmd, char **envp, int i)
{
	dup2(cmd[i - 1].fd[0], STDIN_FILENO);
	if (i == cmd[0].process_nb)
		dup2(cmd[0].fd[1], STDOUT_FILENO);
	else
		dup2(cmd[i].fd[1], STDOUT_FILENO);
	pipes_closer(cmd, cmd[0].process_nb);
	execve(cmd[i].path, cmd[i].arg, envp);
}

void	forker(t_cmd *cmd, char **envp)
{
	int	i;

	i = 0;
	while (++i <= cmd[0].process_nb)
	{
		cmd[i].process_id = fork();
		if (cmd[i].process_id == -1)
			free_n_exit(cmd);
		if (cmd[i].process_id == 0)
		{
			if (!cmd[i].path || access(cmd[i].path, X_OK) != 0)
				error_msg(cmd[i].arg[0], cmd);
			else
				proccess_cmd(cmd, envp, i);
			break ;
		}
	}
	pipes_closer(cmd, cmd[0].process_nb);
	while (waitpid(-1, NULL, WUNTRACED) != -1)
		;
}
