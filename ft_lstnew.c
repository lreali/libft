/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:32:00 by ereali            #+#    #+#             */
/*   Updated: 2019/10/20 20:04:07 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;
	
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!(new->content = (void *)malloc(sizeof(t_list))))
		return (NULL);
	ft_memmove(new->content, content , sizeof(t_list));
	new->next = (NULL);
	return (new);
}
