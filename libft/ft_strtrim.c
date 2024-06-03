/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 08:37:41 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/16 17:26:08 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter1(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (j == ft_strlen(set))
			return (i);
		i++;
	}
	return (0);
}

static size_t	ft_counter2(char const *s1, char const *set)
{
	int	j;
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = ft_strlen(set) - 1;
		while (j >= 0)
		{
			if (s1[i] == set[j])
				break ;
			j--;
		}
		if (j == -1)
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		c1;
	int		c2;

	if (*s1)
	{
		c1 = ft_counter1(s1, set);
		c2 = ft_counter2(s1, set);
	}
	if (!(*s1) || c1 > c2)
	{
		c1 = 1;
		c2 = 0;
	}
	trim = (char *)malloc(sizeof(char) * (c2 - c1) + 1 + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (c1 <= c2)
		trim[i++] = s1[c1++];
	trim[i] = '\0';
	return (trim);
}

/*int	main(void)
{
	char	*s = "abcaaa";
	char	*se = "abc";
	char	*n = ft_strtrim(s, se);
	printf("%s", n);
	free(n);
}*/
