/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:16:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/21 10:25:51 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	char	*trimmed;

	if (*s1 == '\0')
		return (NULL);
	if (*set == '\0')
		return (ft_strdup(s1));
	i = 0;
	end = ft_strlen(s1);
	while (in_set(s1[i], set))
		i++;
	if (i == end)
	{
		trimmed = ft_strdup("");
		if (!trimmed)
			return (NULL);
		else
			return (trimmed);
	}
	while (in_set(s1[end - 1], set))
		end--;
	trimmed = ft_substr(s1, i, end - i);
	return (trimmed);
}
