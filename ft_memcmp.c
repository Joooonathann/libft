/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:03:09 by jalbiser          #+#    #+#             */
/*   Updated: 2023/10/23 08:29:54 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;

	a = p1;
	b = p2;
	i = 0;
	while (i < n)
	{
		if (a[i] < b[i])
			return (-1);
		else if (a[i] > b[i])
			return (1);
		i++;
	}
	return (0);
}
