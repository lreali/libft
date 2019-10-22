/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:02:25 by ereali            #+#    #+#             */
/*   Updated: 2019/10/23 01:15:33 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*firstelement;
	t_list	*newlist;

	if (!lst || !(f))
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	firstelement = newlist;
	while (lst)
	{
		lst = lst->next;
		if (!(newlist = f(lst->content)))
			{
				del(newlist->content);
				free(newlist);
				return (NULL);
			}
		newlist = newlist->next;
	}
	return (firstelement);
}
