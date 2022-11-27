/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/27 13:04:14 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*cal;
	size_t	total;
	size_t	i;

	total = nmemb * size;
	if (total / size != nmemb)
		return (NULL);
	cal = malloc(total);
	if (!cal)
		return (NULL);
	i = 0;
	while (i < total)
	{
		cal[i] = 0;
		i++;
	}
	return (cal);
}
