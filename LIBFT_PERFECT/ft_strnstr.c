/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:18:01 by jalbiser          #+#    #+#             */
/*   Updated: 2023/11/03 18:08:05 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	s;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((big[i] != '\0') && (i < len))
	{
		s = 0;
		while ((big[i + s] == little[s]) && ((i + s) < len))
		{
			if (little[s + 1] == '\0')
				return ((char *)&big[i]);
			s++;
		}
		i++;
	}
	return (NULL);
}
