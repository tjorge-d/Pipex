/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:30:22 by tjorge-d          #+#    #+#             */
/*   Updated: 2024/01/30 16:32:02 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	file_name_checker(char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		perror(argv[1]);
	else
		close(fd);
}

static int	here_doc_check(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] == ' ' && argv[1][i] != '\0')
		i++;
	if (argv[1][i] == 'h' && ft_strncmp("here_doc", &argv[1][i], 8) == 0)
	{
		i += 8;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ')
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}

static char	**paths_divider(char **envp)
{
	char	**paths;
	int		envp_index;

	paths = NULL;
	envp_index = -1;
	if (!envp)
		return (NULL);
	while (envp[++envp_index] != NULL)
	{
		if (ft_strncmp("PATH=", envp[envp_index], 5) == 0)
		{
			paths = ft_split(envp[envp_index], ':');
			if (!paths)
				exit(0);
			paths[0] = (paths[0] + 5);
			break ;
		}
	}
	return (paths);
}

int	main(int argc, char **argv, char **envp)
{
	t_cmd	*cmd;
	int		here_doc;

	cmd = NULL;
	if (argc < 5)
	{
		write(2, "Error: Not enough arguments\n", 28);
		return (0);
	}
	here_doc = here_doc_check(argv);
	if (!here_doc)
		file_name_checker(argv);
	cmd = check_command(argc - here_doc, (argv + here_doc), \
			paths_divider(envp), here_doc);
	pipe_creator(cmd);
	forker(cmd, envp);
	free_cmd(cmd);
	return (0);
}
