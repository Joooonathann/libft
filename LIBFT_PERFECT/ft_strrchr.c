/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:04:25 by jalbiser          #+#    #+#             */
/*   Updated: 2023/11/03 16:07:52 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int s)
{
	size_t	len;

	len = ft_strlen(str);
	while (len != (char) s)
	{
		if (len == 0)
			return (NULL);
		len--;
	}
	return ((char *)(str + i));
}
