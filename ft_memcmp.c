/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/17 17:17:53 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(char *)s1 > *(char *)s2 || *(char *)s1 < *(char *)s2)
		{
			if ((*(char *)s1 - *(char *)s2) < -1)
				return (-1);
			else
				return (*(char *)s1 - *(char *)s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
