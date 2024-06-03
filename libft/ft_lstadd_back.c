/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:05:23 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/23 16:55:21 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	temp = *lst;
	while (temp)
	{
		if (temp->next == NULL)
		{
			temp->next = new;
			return ;
		}
		temp = temp->next;
	}
	temp->next = new;
}

/*int	main()
{
	t_list  *list = NULL;
	t_list	*lst1 = ft_lstnew(ft_strdup("Estou"));
	list = lst1;
	t_list	*lst2 = ft_lstnew(ft_strdup("Farto"));
	lst1->next = lst2;
	t_list	*lst3 = ft_lstnew(ft_strdup("De"));
	lst2->next = lst3;
	lst3->next = NULL;
	t_list	*lst4 = ft_lstnew(ft_strdup("Listas"));
	while(list)
	{
		printf("%s\n", ((char *)(list->content)));
		list = list->next;
	}
	printf("\n");
	list = lst1;
	ft_lstadd_back(&list, lst4);
	list = lst1;
	while(list)
	{
		printf("%s\n", ((char *)(list->content)));
		list = list->next;
	}
}*/
