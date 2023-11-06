/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:18:01 by jalbiser          #+#    #+#             */
/*   Updated: 2023/11/03 18:08:05 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*result;

	len = ft_strlen(src) + 1;
	result = malloc(sizeof(char) * len));
	if (!result)
		return (NULL);
	ft_strlcpy(result, src, len));
	return(result);
}
