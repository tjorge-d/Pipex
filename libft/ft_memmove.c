/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:59:51 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/04 13:59:54 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (src < dest)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((const char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	void	*d = 0;
	void	*c = 0;
	memmove(d, c, 4);
	ft_memmove(d, c, 4);
}*/
