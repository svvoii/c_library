/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:16:22 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/24 16:03:05 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
