/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:37:02 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/11 10:46:50 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = (char *)(s + i);
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	return (last);
}

/*int	main(void)
{
	int	c = 'j';
	char	*s = "bonjour";
	printf ("%s\n", strrchr(s, c));
	printf ("%s\n", ft_strrchr(s, c));
}*/
