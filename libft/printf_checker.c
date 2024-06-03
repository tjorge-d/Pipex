/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:23:16 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/30 12:23:20 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_checker(const char *str, int i, va_list arg, int *counter)
{
	if (str[i + 1] == 'c')
		printf_putchar(va_arg(arg, int), counter);
	else if (str[i + 1] == 's')
		printf_putstr(va_arg(arg, char *), counter);
	else if (str[i + 1] == 'p')
		printf_puthexa(va_arg(arg, unsigned long), 'p', counter);
	else if (str[i + 1] == 'd')
		printf_putnbr(va_arg(arg, int), counter);
	else if (str[i + 1] == 'i')
		printf_putnbr(va_arg(arg, int), counter);
	else if (str[i + 1] == 'u')
		printf_putunbr(va_arg(arg, unsigned int), counter);
	else if (str[i + 1] == 'x')
		printf_puthexa(va_arg(arg, unsigned int), 'x', counter);
	else if (str[i + 1] == 'X')
		printf_puthexa(va_arg(arg, unsigned int), 'X', counter);
	else if (str[i + 1] == '%')
		printf_putchar('%', counter);
	else
		printf_putchar(str[i], counter);
}
