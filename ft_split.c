/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:14:35 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/26 15:10:46 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	words_count(char const *s, char c)
{
	size_t		words;
	size_t		i;
	size_t		tmp;
	size_t		len;

	words = 0;
	i = 0;
	tmp = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (s[i] == c && i < len)
			i++;
		tmp = i;
		while (s[i] != c && i < len)
			i++;
		if (i > tmp)
			words++;
	}
	return (words);
}

void	*split(char **split, char const *s, char c)
{
	int			i;
	int			j;
	int			w;
	int			len;

	i = 0;
	w = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && i + j < len)
			j++;
		if (j > 0)
		{
			split[w] = (char *)malloc(sizeof(*split[w]) * (j + 1));
			ft_memcpy(split[w], &s[i], j);
			split[w][j] = '\0';
			w++;
		}
		i += j;
	}
	return ((void *)1);
}

char	**ft_split(char const *s, char c)
{
	char		**spl;
	size_t		words;

	if (!s)
		return (NULL);
	words = words_count(s, c);
	spl = (char **)malloc(sizeof(char *) * (words + 1));
	if (!spl)
		return (NULL);
	spl[words] = (void *)0;
	if (words > 0)
		split(spl, s, c);
	return (spl);
}
