/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:07:38 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/23 12:06:12 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	(del)(lst->content);
	free(lst);
}

/*int	main()
{
	t_list	*lista;
	t_list  *lst1;
	t_list  *lst2;
	t_list  *lst3;
	lst1 = ft_lstnew(ft_strdup("Estou"));
	lst2 = ft_lstnew(ft_strdup("Farto"));
	lst3 = ft_lstnew(ft_strdup("Disto"));
	lista = lst1;
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;
	while(lista)
	{
		printf("%s\n", ((char *)(lista->content)));
		lista = lista->next;
	}
	ft_lstdelone(lst3, &free);
	lst2->next = NULL;
	lista = lst1;
	while(lista)
	{
		printf("%s\n", ((char *)(lista->content)));
		lista = lista->next;
	}
}*/
