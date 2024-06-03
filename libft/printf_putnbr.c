/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:18:44 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/30 12:18:48 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_putnbr(long nbr, int *counter)
{
	if (nbr < -9 || nbr > 9)
		printf_putnbr(nbr / 10, counter);
	else if (nbr < 0)
	{
		write(1, "-", 1);
		(*counter)++;
	}
	write(1, &"0123456789"[(nbr % 10) * ((nbr > 0) - (nbr < 0))], 1);
	(*counter)++;
}
