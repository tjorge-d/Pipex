/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:29:52 by tjorge-d          #+#    #+#             */
/*   Updated: 2024/01/30 16:29:56 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include "../libft/libft.h"
# include <sys/wait.h>

typedef struct s_cmd
{
	char	*path;
	char	**arg;
	int		fd[2];
	int		process_id;
	int		process_nb;
}	t_cmd;

//parser.c
t_cmd	*check_command(int argc, char **argv, char **paths, int here_doc);

//pipex_utils.c
void	free_n_exit(t_cmd *cmd);
void	free_paths(char **paths);
void	free_cmd(t_cmd *cmd);
int		no_input_file(t_cmd *cmd);

//pipex.c
void	pipes_closer(t_cmd *cmd, int limit);
void	pipe_creator(t_cmd *cmd);
void	forker(t_cmd *cmd, char **envp);

#endif
