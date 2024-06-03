/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:18:19 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/30 12:18:23 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_puthexa(unsigned long nbr, char mode, int *counter)
{
	if (mode == 'p')
	{
		if (!nbr)
			printf_putstr("(nil)", counter);
		else
		{
			write(1, "0x", 2);
			*counter = *counter + 2;
			mode = 'x';
		}
	}
	if (nbr != 0 && nbr / 16)
		printf_puthexa(nbr / 16, mode, counter);
	if (mode == 'X')
	{
		write(1, &"0123456789ABCDEF"[nbr % 16], 1);
		(*counter)++;
	}
	if (mode == 'x')
	{
		write(1, &"0123456789abcdef"[nbr % 16], 1);
		(*counter)++;
	}
}
