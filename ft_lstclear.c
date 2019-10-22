/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:35:41 by ereali            #+#    #+#             */
/*   Updated: 2019/10/22 20:20:50 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_lstclear_f(void *elem)
{
	t_list	*tmp;

	tmp = (t_list *)elem;
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;	

	tmp = (*lst);
	while (tmp && del)
		{
			tmp = tmp->next;
			del((void *)(*lst));
			free((void *)(*lst));
			*lst = tmp;
		}
	*lst = NULL;
}
/*
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putendl_fd(list->content, 1);
		list = list->next;
	}
}

int main()
{
	t_list	*list;
	t_list	*new_elem;

	list = NULL;
	new_elem = NULL;
	new_elem = ft_lstnew("Container A");
	ft_lstadd_back(&list, new_elem);

	new_elem = ft_lstnew("Container B");
	ft_lstadd_back(&list, new_elem);

	new_elem = ft_lstnew("Container C");
	ft_lstadd_back(&list, new_elem);
	
	ft_putendl_fd("Before:", 1);
	print_list(list);

	ft_lstclear(&list, &ft_lstclear_f);

	ft_putendl_fd("After", 1);
	print_list(list);

	return (0);
}*/
