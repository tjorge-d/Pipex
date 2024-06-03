/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:58:59 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/04 13:59:02 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = '\0';
}

/*int	main()
{
	void	*c[10];
	int	i = 0;
	int	n = 10;
	memset(c, 'A', n);
	while (i < n)
	{
		printf("%c", ((unsigned char *)c)[i]);
		i++;
	}
	ft_bzero(c, 5);
//	bzero(c , 5);
	i = 0;
	printf("\n");
	while (i < n)
	{
		printf("%c", ((unsigned char *)c)[i]);
		i++;
	}

}*/
