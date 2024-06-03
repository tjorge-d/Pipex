/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:23:17 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:23 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dst[l] != '\0')
		l++;
	while (src[i] != '\0' && (l + i) < (size - 1) && size > 0)
	{
		dst[l + i] = src[i];
		i++;
	}
	dst[l + i] = '\0';
	while (src[i] != '\0')
		i++;
	if (size <= l)
		l = size;
	return (l + i);
}

/*int	main(void)
{
	char	d[100] = "Tudo";
	char	d2[100] = "Tudo";
	char	*s = "bem??";
	int	n = 9;

	printf("%ld\n", ft_strlcat(d, s, n));
	printf("%s\n\n", d);
	printf("%ld\n", strlcat(d2, s, n));
	printf("%s", d2);
}*/

//cc -Wall -Wextra -Werror ft_strlcat.c -lbsd
