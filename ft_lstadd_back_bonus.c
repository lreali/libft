/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:30:52 by ereali            #+#    #+#             */
/*   Updated: 2019/10/21 16:04:02 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!(*alst))
		(*alst) = new;
	else if (new)
	{
		tmp = (*alst);
		while ((*alst)->next)
		{
			(*alst) = (*alst)->next;
		}
		(*alst)->next = new;
		(*alst) = tmp;
	}
}
