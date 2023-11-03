/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:04:48 by jalbiser          #+#    #+#             */
/*   Updated: 2023/11/03 17:15:24 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *) p1;
	s2 = (unsigned char *) p2;
	i = 0;
	while (i < size)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
