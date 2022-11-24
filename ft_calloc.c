/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/24 18:17:34 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*cal;
	unsigned char	*tmp;
	size_t			total;

	total = nmemb * size;
	cal = malloc(total);
	if (!cal)
		return (NULL);
	tmp = cal;
	while (total--)
	{
		*tmp = 0;
		tmp++;
	}
	return (cal);
}
