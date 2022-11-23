/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sv <sv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:38:58 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/23 09:11:30 by sv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	tmp = new;
	while (lst->next)
	{
		lst lst->next;
		tmp->next = ft_lstnew(ft_strdup(f(lst->content)));
		if (!(tmp->next))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (new);
}
