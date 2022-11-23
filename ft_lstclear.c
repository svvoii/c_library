/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sv <sv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:16:22 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/23 09:15:54 by sv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libst.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		nxt = tmp->next;
		ft_lstdelone(tmp, (del));
		tmp = nxt;
	}
	*lst = NULL;
}
