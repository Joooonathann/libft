/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:26:30 by jalbiser          #+#    #+#             */
/*   Updated: 2023/10/25 15:45:36 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	b;

	if (!s1 || !s2)
		return (NULL);
	dest = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!dest)
		return (NULL);
	b = 0;
	i = 0;
	while (s1[i])
		dest[b++] = s1[i++];
	i = 0;
	while (s2[i])
		dest[b++] = s2[i++];
	dest[b] = '\0';
	return (dest);
}
