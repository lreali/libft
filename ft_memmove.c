/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:15:59 by ereali            #+#    #+#             */
/*   Updated: 2019/10/13 15:32:29 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s2;
	unsigned int	i;

	i = 0;
	s2 = src;
	while (i < n)
	{
		((unsigned char *)dest)[i] = s2[i];
		i++;
	}
	return (dest);
}
