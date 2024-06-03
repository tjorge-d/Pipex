/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:58:45 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/04 13:58:48 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = c;
	return (s);
}

/*int	main()
{
	void	*c[10];
	int	i = 0;
	int	n = 4;
	memset(c, 'A', n);
	while (i < 100)
	{
		printf("%c", ((unsigned char *)c)[i]);
		i++;
	}
}*/
