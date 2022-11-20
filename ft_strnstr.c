/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/17 19:51:52 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;

	while (*big != '\0' && len--)
	{
		b = big;
		l = little;
		while (*b == *l || *l == '\0')
		{
			if (*l == '\0')
				return ((char *)big);
			b++;
			l++;
		}
		big++;
	}
	return (NULL);
}
