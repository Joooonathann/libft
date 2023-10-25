/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:29:37 by jalbiser          #+#    #+#             */
/*   Updated: 2023/10/25 11:18:49 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t size)
{
	size_t	y;
	char	*a;
	char	*b;

	a = (char *) dest;
	b = (char *) source;
	y = 0;
	while (y < size)
	{
		a[y] = b[y];
		y++;
	}
	return (dest);
}
