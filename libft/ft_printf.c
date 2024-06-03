/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:31:30 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/30 12:31:35 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int				i;
	int				counter;
	va_list			arg;

	i = 0;
	counter = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			while (str[i + 1] == ' ')
				i++;
			printf_checker(str, i, arg, &counter);
			i++;
		}
		else
			printf_putchar(str[i], &counter);
		i++;
	}
	va_end(arg);
	return (counter);
}

/*int	main(void)
{
	char	*a = "%x";
	char	b = 's';
	long	c = -429496729;
	printf("%i\n", ft_printf(a, &b));
	
	printf("%i\n", printf(a, b));
}*/
