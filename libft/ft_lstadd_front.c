/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:57:05 by tjorge-d          #+#    #+#             */
/*   Updated: 2023/10/20 12:44:09 by tjorge-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main()
{
	char	*s = "BOAS";
	t_list	*str;
	t_list	*new;
	
	new = ft_lstnew(s);
	ft_lstadd_front(&str, new);
	printf("%s", str->content);
}*/
