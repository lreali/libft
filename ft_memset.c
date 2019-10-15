/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:25:52 by ereali            #+#    #+#             */
/*   Updated: 2019/10/15 19:38:04 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((unsigned char *)str)[i])
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
int 	main()
{
	void *r;
	void *s;	

	s = "qqqqqqq";
	r = ft_memset(s, 0, 12);
	printf("%s\n",(char *)r);
	return (0);
}*/
