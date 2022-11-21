/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:29:47 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/21 10:55:41 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	buf[ft_strlen(s) * 2];
	int		n;
	int		i;
	int		j;

	n = 0;
	i = 0;
	j = 0;
	if (!s || !*s)
	{
		split = malloc(sizeof(char *) * 1);
		if (!split)
			return (NULL);
		*split = (void *)0;
		return (split);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			n++;
		while (s[i] == c)
			i++;
		i++;
	}
	split = malloc(sizeof(char *) * n + 1);
	if (!split)
		return (NULL);
	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			buf[j] = s[i];
			i++;
			j++;
		}
		if (j > 0)
		{
			buf[j] = '\0';
			split[n] = malloc(sizeof(char) * j);
			strcpy(split[n], buf);
			n++;
		}
		i++;
	}
	return (split);
}
