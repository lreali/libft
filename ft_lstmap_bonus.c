/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:02:25 by ereali            #+#    #+#             */
/*   Updated: 2019/10/23 17:28:14 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*firstelement;
	t_list	*newlist;

	if (!lst || !f)
		return (NULL);
	if(!(newlist = ft_lstnew(f(lst->content))))
		return (NULL);
	firstelement = newlist;
	while (lst->next && del)
	{
		lst = lst->next;
		if (!(newlist->next = ft_lstnew(f(lst->content))))
				ft_lstclear(&firstelement, del);
		newlist = newlist->next;
	}
	return (firstelement);
}
