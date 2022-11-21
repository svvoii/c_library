/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:14:35 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/21 17:14:40 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	sub_str(char const *s, char c)
{
	int		n;

	n = 0;
	while (*s != '\0')
	{
		if (*s == c)
			n++;
		while (*s == c)
			s++;
		s++;
	}
	return (n + 2);
}

char	**split(char **split, char const *s, char c)
{
	int			n;
	int			i;
	int			j;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			j++;
			if (s[i] == c || s[i] == '\0')
			{
				split[n++] = ft_substr(s, i - j, j);
			}
		}
		i++;
	}
	split[n] = (void *)0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;

	if (!s || !*s)
	{
		spl = malloc(sizeof(char *) * 1);
		if (!spl)
			return (NULL);
		*spl = (void *)0;
		return (spl);
	}
	spl = malloc(sizeof(char *) * sub_str(s, c));
	if (!spl)
		return (NULL);
	return (split(spl, s, c));
}
