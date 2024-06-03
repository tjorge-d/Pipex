/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:40:45 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/24 09:00:10 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*static void	ft_changer(char *c)
{
	char	e;

	e = 'E';
	c[0] = e;
}

int	main()
{
	t_list  *list;
	t_list	*head;
	t_list	*lst1 = ft_lstnew(ft_strdup("Estou"));
	head = lst1;
	list = head;
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
	list = head;
	ft_lstiter(list,(void *)ft_changer);
	while(list)
	{
		printf("%s\n", ((char *)(list->content)));
		list = list->next;
	}
}*/
