/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:05:29 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/17 16:11:13 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int	c;

	c = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
		c++;
	while (n != 0)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

static void	*ft_conv(char *str, int c, int n)
{
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		str[c - 1] = (n % 10) + 48;
		c--;
		n = n / 10;
	}
	if (c == 1 && str[0] != '0')
		str [0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		c;

	c = ft_counter(n);
	str = (char *)malloc(sizeof(char) * c + 1);
	if (!str)
		return (NULL);
	str[c] = '\0';
	if (n == -2147483648)
	{
		str[c - 1] = '8';
		n = -214748364;
		c--;
	}
	if (n == 0)
		str[0] = '0';
	ft_conv(str, c, n);
	return (str);
}

/*int	main()
{
	int n = -10004;
	
	printf("%s", ft_itoa(n));
}*/
