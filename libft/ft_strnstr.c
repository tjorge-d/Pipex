/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:17:49 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/11 15:15:46 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + c] == little[c] && (i + c) < len && little[c] != '\0')
			c++;
		if (little[c] == '\0')
			return ((char *)(big + i));
		else
			c = 0;
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*b = "";
	char	*l = "no";
	int	len = 1;

	printf("%s\n", ft_strnstr(b, l, len));
//	printf("%s\n", strnstr(b, l, len));
} cc -Wall -Wextra -Werror ft_strnstr.c -lbsd*/
