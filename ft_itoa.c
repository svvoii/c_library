/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:47:09 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/21 10:58:42 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		tmp;
	int		len;
	int		negative;

	if (n == -2147483648)
		return (strdup("-2147483648"));
	negative = 0;
	len = 0;
	if (n < 0)
	{
		n *= -1;
		negative = 1;
	}
	tmp = n;
	while (tmp >= 1)
	{
		tmp /= 10;
		len++;
	}
	len++;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	tmp = n;
	printf("len: '%d'\tn: '%d'\n", len, n);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (tmp % 10) + '0';
		tmp /= 10;
		printf("str[%d]: '%c'\tn: '%d'\n", len, str[len], tmp);
	}
	if (negative)
		str[0] = '-';
	else if (n > 0)
		str = memmove(str, str + 1, strlen(str));
	return (str);
}
