/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:07:36 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/12 18:28:02 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int		i;
	unsigned int		j;
	char				*s;

	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i] != '\0')
		s[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i] != '\0')
		s[j++] = s2[i++];
	s[j] = '\0';
	return (s);
}

/*int	main()
{
	char	*pre = "";
	char	*su = "";
	
	printf("%s", ft_strjoin(pre, su));
}*/
