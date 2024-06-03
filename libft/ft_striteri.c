/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:11:05 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/18 13:22:54 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	ft_iter(unsigned int i, char *c)
{
	*c = 'E';
	i = 0;
}

int	main()
{
	char	*c;
	
	c = malloc(5);
	strcpy(c, "BOAS");
	printf("%s", c);
	ft_striteri(c, &ft_iter);
	printf("%s", c);
}*/
