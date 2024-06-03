/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:19:19 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/30 12:19:21 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_putstr(char *str, int *counter)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		printf_putstr("(null)", counter);
		return ;
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		(*counter)++;
		i++;
	}
}
