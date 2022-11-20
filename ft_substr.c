/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:29:45 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/20 19:02:01 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub_s;
	size_t		i;

	if (!s || !*s)
		return (NULL);
	sub_s = malloc(len + 1);
	if (!sub_s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_s[i] = s[i + start];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}

int	main(void)
{
	char	str[] = "Wake up NEO! Follow the White Rabbit...";
	char	*sub;

	sub = ft_substr(str, 24, 12);
	printf("str: '%s'\n", str);
	printf("sub: '%s'\n", sub);
	free(sub);
	return (0);
}
