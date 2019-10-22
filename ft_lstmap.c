/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:02:25 by ereali            #+#    #+#             */
/*   Updated: 2019/10/22 20:11:34 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*firstelement;
	t_list	*newlist;

	if (!lst || !(*f))
		return (NULL);
	newlist = (*f)(lst);
	firstelement = newlist;
	while (lst)
	{
		lst = lst->next;
		if (!(newlist = (*f)(lst)))
			{
				(*del)(newlist);
				free(newlist);
				return (NULL);
			}
		newlist = newlist->next;
	}
	return (firstelement);
}
