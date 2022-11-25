/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/25 11:04:55 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*cal;
	size_t	total;
	size_t	i;

	total = nmemb * size;
	if (!nmemb || !size || (total / size != nmemb))
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
