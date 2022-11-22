/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:38:58 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/22 21:24:30 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	tmp = lst;
	new = malloc(sizeof(t_list));
	lst = new;
	while (tmp->next)
	{
		new->content = f(tmp->content);
		new->next = tmp;
		del(tmp->content);
		tmp = tmp->next;
	}
	return (lst);
}
