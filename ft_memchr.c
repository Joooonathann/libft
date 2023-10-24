/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 06:16:11 by jalbiser          #+#    #+#             */
/*   Updated: 2023/10/23 06:16:30 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *a, int s, size_t n)
{
	unsigned char	*c;
	unsigned char	d;
	size_t			i;

	c = (unsigned char *) a;
	d = (unsigned char) s;
	i = 0;
	while (i < n)
	{
		if (c[i] == d)
			return ((void *)(c + i));
		i++;
	}
	return (NULL);
}
