/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:44:41 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/20 17:40:16 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int	main()
{
	t_list	*str = ft_lstnew("BOM");
	t_list	*str2 = ft_lstnew("DIA");
	t_list  *str3 = ft_lstnew("AMIGO");

	str->next = str2;
	str2->next = str3;
	printf("%i", ft_lstsize(str));
	free(str);
	free(str2);
	free(str3);
}*/
