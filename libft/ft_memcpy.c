/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:59:34 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/11 10:50:01 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	void	*s = 0;
	void	*d = 0;
	
	ft_memcpy(((void*)0), ((void*)0), 3);
	
	memcpy(((void*)0), ((void*)0), 3);
	
	printf("oi");	
}*/
