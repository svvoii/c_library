/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:16:22 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/22 20:32:31 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libst.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next)
	{
		nxt = tmp->next;
		del(tmp);
		tmp = nxt;
	}
	*lst = NULL;
}
