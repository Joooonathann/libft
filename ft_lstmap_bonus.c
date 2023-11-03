/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:26:34 by jalbiser          #+#    #+#             */
/*   Updated: 2023/11/03 10:08:17 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *result;
    t_list  *new_elem;

    if (!lst || !f || !del)
        return (NULL);
    result = NULL;
    while (lst != NULL)
    {
        new_elem = ft_lstnew(f(lst->content));
        if (!new_elem)
        {
            ft_lstclear(&result, del);
            return (NULL);
        }
        ft_lstadd_back(&result, new_elem);
        lst = lst->next;
    }
    return (result);
}

