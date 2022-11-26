/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sv <sv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:14:35 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/26 08:26:42 by sv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	words_count(char const *s, char c)
{
	size_t		words;
	size_t		i;
	size_t		tmp;
	size_t		len;

	words = 0;
	i = 0;
	len = ft_strlen(s);
	printf("strlen: '%ld' > s: '%s' > c:'%c'\n", len, s, c);
	while (i < len)
	{
		while (s[i] == c)	
		{
			printf("%c|", s[i]);
			i++;
		}
		printf("\n");
		tmp = i;
		while (s[i] != c)
			i++;
		if (i > tmp)
			words++;
	}
	return (words);
}

char	**split(char **split, char const *s, char c)
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
		{
			printf("%c|", s[i + j]);
			j++;
		}
		printf("\n");
		if (j > 0)
			split[w++] = ft_substr(&s[i], 0, j);
		i += j;
	}
	split[w] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t		words;

	words = words_count(s, c);
	printf("words: '%ld'\n", words);
	spl = malloc(sizeof(char *) * words);
	if (!spl)
		return (NULL);
	spl = split(spl, s, c);
	return (spl);
}
