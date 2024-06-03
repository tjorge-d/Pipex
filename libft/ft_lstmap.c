/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:00:19 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/24 09:36:28 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	nlist = ft_lstnew(f(lst->content));
	if (!nlist)
		return (NULL);
	head = nlist;
	lst = lst->next; 
	while (lst)
	{
		nlist->next = ft_lstnew(f(lst->content));
		if (!nlist->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		nlist = nlist->next;
		lst = lst->next;
	}
	nlist->next = NULL;
	return (head);
}

/*static void	ft_changer(char *c)
{
	char	e;

	e = 'E';
	c[0] = e;
}

int	main()
{
	t_list	*new_list;
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
	new_list = ft_lstmap(list, (void *)ft_changer, free);
	while(new_list)
	{
		printf("%s\n", ((char *)(new_list->content)));
		new_list = new_list->next;
	}
}*/
