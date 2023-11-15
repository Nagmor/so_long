/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:13:08 by nagmor            #+#    #+#             */
/*   Updated: 2023/10/20 15:27:36 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_entry;

	if (!f || !lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_entry = ft_lstnew(f(lst->content));
		if (!new_entry)
		{
			ft_lstclear(&new_entry, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_entry);
		lst = lst->next;
	}
	return (new_lst);
}
