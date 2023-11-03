/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:06:59 by jalbiser          #+#    #+#             */
/*   Updated: 2023/11/03 13:12:33 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*a;
	char	*b;
	size_t	i;

	i = 0;
	a = (const char  *) src;
	b = (char *) dest;
	if (!a || !b)
		return (NULL);
	while (src != '\0' && i < size)
	{
		b[ft_strlen(dest) + i] = a[i];
		i++;
	}
	b[i] = '\0';
	return (dest);
}
