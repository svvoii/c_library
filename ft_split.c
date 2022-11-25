/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:14:35 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/25 20:35:49 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	sub_str(char const *s, char c)
{
	size_t		n;

	n = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c)
			n++;
		while (*s != c && *s)
			s++;
	}
	return (++n);
}

char	**split(char **split, char const *s, char c)
{
	int			n;
	int			i;

	n = 0;
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		i = 0;
		while (s[i] != c && s[i])
			i++;
		split[n++] = ft_substr(s, 0, i);
		while (*s != c && *s)
			s++;
	}
	split[n] = (void *)0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;

	spl = malloc(sizeof(char *) * sub_str(s, c));
	if (!spl)
		return (NULL);
	spl = split(spl, s, c);
	return (spl);
}
