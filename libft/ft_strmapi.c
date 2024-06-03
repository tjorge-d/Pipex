/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:22:21 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/18 12:53:51 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_iter(unsigned int i, char c)
{
	c = 'E';
	i = 0;
	return (c);
}

int	main()
{
	char	*c;
	char	*n;
	
	c = malloc(5);
	strcpy(c, "BOAS");
	printf("%s\n", c);
	n = ft_strmapi(c, &ft_iter);
	printf("%s\n", c);
	printf("%s", n);	
}*/
