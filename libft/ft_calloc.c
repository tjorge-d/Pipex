/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:53:53 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/11 16:26:07 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*p;

	p = (void *)malloc(nmeb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmeb * size);
	return (p);
}

/*int	main()
{
	int	size = 4;
	int	*d1 = ft_calloc(size, sizeof(int));
 	int	*d2 = calloc(size, sizeof(int));
 	
 	if (memcmp(d1, d2, size * sizeof(int)) == 0)
 		write(1, "CERTO!", 6);
	else
		write(1, "ERRADO!", 7);
	free(d1);
 	free(d2);

	return (0);
}*/
