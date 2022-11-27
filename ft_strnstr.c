/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/27 17:10:28 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		l_len;

	l_len = ft_strlen(little);
	i = 0;
	if (len == 0 && (!big || !little))
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (big[i] && (l_len + i) <= len)
	{
		if (ft_strncmp(big + i, little, l_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
