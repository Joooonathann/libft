/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 06:19:14 by jalbiser          #+#    #+#             */
/*   Updated: 2023/10/23 06:19:37 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t n)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if ((*b == '\0') || (*a == '\0'))
		return ((char *)a);
	while (i < n)
	{
		while (a[i] == b[c])
		{
			if (i >= n)
				return (NULL);
			if (b[c] == '\0')
				return ((char *)&a[i - c]);
			c++;
			i++;
		}
		c = 0;
		i++;
	}
	return (NULL);
}
