/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:22:38 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/23 19:05:25 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*int	main()
{
	t_list	*list[5];

	list[0] = ft_lstnew("BOM");
	list[1] = ft_lstnew("DIA");
	list[2] = ft_lstnew("AMIGO");
	list[3] = ft_lstnew("TUDO");
	list[4] = ft_lstnew("BEM?!");

	list[0]->next = list[1];	
	list[1]->next = list[2];
	list[2]->next = list[3];
	list[3]->next = list[4];
	list[4]->next = NULL;

	printf("%s", (char *)ft_lstlast(*list)->content);
	
	while ((*list)->next != NULL)
	{
		free(*list);
		(*list) = (*list)->next;
	}
	free(list);
}*/
