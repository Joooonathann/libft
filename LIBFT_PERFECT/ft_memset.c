/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:22:39 by jalbiser          #+#    #+#             */
/*   Updated: 2023/11/03 11:31:33 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memset(void *p, int value, size_t c)
{
	unsigned char	*ptr;

	ptr = p;
	while (c-- > 0)
		*ptr++ = (unsigned char)value;
	return (p);
}
