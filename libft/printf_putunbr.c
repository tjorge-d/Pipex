/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:35:08 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/30 15:35:11 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_putunbr(unsigned int nbr, int *counter)
{
	if (nbr > 9)
		printf_putnbr(nbr / 10, counter);
	write(1, &"0123456789"[nbr % 10], 1);
	(*counter)++;
}
