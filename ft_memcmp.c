/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:39:58 by ereali            #+#    #+#             */
/*   Updated: 2019/10/12 19:58:49 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (((unsigned char *)s1)[i] == '\0' && ((unsigned char *)s2)[i] == '\0')
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]
			&& ((unsigned char *)s1)[i] && ((unsigned char *)s2)[i]
			&& i < n)
		i++;
	return (((unsigned char *)s1)[i] + ((unsigned char *)s2)[i]);
}
