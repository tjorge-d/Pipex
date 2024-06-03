/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:27:13 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/17 10:44:02 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rows(char const *s, char c)
{
	int	rows;
	int	i;

	rows = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			rows++;
		while (s[i] != c && s[i])
			i++;
	}
	return (rows);
}

static void	ft_separator(char **split, char const *s, char c, int n)
{
	int	i1;
	int	i2;
	int	j;

	i1 = 0;
	j = 0;
	while (s[i1] == c)
		i1++;
	while (s[i1] && j < n)
	{
		i2 = 0;
		while (s[i1] != c && s[i1])
			split[j][i2++] = (char)s[i1++];
		split[j][i2] = '\0';
		j++;
		while (s[i1] == c)
			i1++;
	}
}

static char	**ft_stralloc(char **split, char const *s, char c, int n)
{
	int	counter;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && j < n)
	{
		while (s[i] == c)
			i++;
		counter = 0;
		while (s[i] != c && s[i++])
			counter++;
		split[j] = (char *)malloc(sizeof(char) * (counter + 1));
		if (!split[j])
		{
			j--;
			while (j > -1)
				free(split[j--]);
			free(split);
			return (NULL);
		}
		j++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		n;

	n = ft_rows(s, c);
	split = (char **)malloc(sizeof(char *) * (n + 1));
	if (!split)
		return (NULL);
	if (n > 0)
	{
		split = ft_stralloc(split, s, c, n);
		if (split == NULL)
			return (NULL);
	}
	split[n] = NULL;
	if (n > 0)
		ft_separator(split, s, c, n);
	return (split);
}

/*int	main()
{
	char	*s = "    Saaaaa";
	char	c = ' ';
	char	**str;

	str = ft_split(s, c);
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);
	printf("%s\n", str[11]);
	//printf("%s\n", str[5]);
	free(str);
}*/
