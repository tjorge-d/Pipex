/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:36:41 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/11 12:24:01 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((const char *)s)[i] == (const char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*s = "BANQUEIRO";
	int	c = 'A';
	int	n = 6;

	printf("%p\n", ft_memchr(s, c, n));
	printf("%p\n", memchr(s, c, n));
}*/
