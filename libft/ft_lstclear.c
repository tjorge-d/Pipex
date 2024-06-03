/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:06:29 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/23 18:53:17 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*t;

	if (!lst || !del)
		return ;
	t = *lst;
	while (t)
	{
		temp = t->next;
		ft_lstdelone(t, del);
		t = temp;
	}
	*lst = NULL;
}

/*int	main()
{
	t_list  *list;
	t_list	*lst1 = ft_lstnew(ft_strdup("Estou"));
	list = lst1;
	t_list	*lst2 = ft_lstnew(ft_strdup("Farto"));
	lst1->next = lst2;
	t_list	*lst3 = ft_lstnew(ft_strdup("De"));
	lst2->next = lst3;
	t_list	*lst4 = ft_lstnew(ft_strdup("Listas"));
	lst3->next = lst4;
	lst4->next = NULL;

	while(list)
	{
		printf("%s\n", ((char *)(list->content)));
		list = list->next;
	}
	list = lst1;
	ft_lstclear(&lst3, free);
//	st2->next = NULL;
	list = lst1;
	while(list)
	{
		printf("%s\n", ((char *)(list->content)));
		list = list->next;
	}
}*/
