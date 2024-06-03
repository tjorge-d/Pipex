/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:27:53 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/11 16:40:50 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*string;
	int			l;

	l = ft_strlen(s);
	string = (char *)malloc(l + 1);
	if (!string)
		return (0);
	ft_memcpy(string, s, l + 1);
	return (string);
}
