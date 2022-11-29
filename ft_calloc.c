/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/29 15:54:13 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*cal;
	size_t	i;

	if (nmemb && (nmemb * size) / nmemb != size)
		return (NULL);
	cal = malloc(nmemb * size);
	if (!cal)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		cal[i] = 0;
		i++;
	}
	return (cal);
}
