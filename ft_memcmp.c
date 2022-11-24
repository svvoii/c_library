/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/24 18:07:24 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	while (n--)
	{
		if (*first > *second || *first < *second)
		{
			if ((*first - *second) < -1)
				return (-1);
			else
				return (*first - *second);
		}
		first++;
		second++;
	}
	return (0);
}
