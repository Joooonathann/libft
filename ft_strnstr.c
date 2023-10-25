/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:10:43 by jalbiser          #+#    #+#             */
/*   Updated: 2023/10/25 13:10:47 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t n)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (*b == '\0')
		return ((char *)a);
	while ((a[i] != '\0') && (i < n))
	{
		c = 0;
		while ((a[i + c] == b[c]) && ((i + c) < n))
		{
			if (b[c + 1] == '\0')
				return ((char *)&a[i]);
			c++;
		}
		i++;
	}
	return (NULL);
}
