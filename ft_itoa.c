/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:47:09 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/21 17:40:49 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*i_to_a(int n)
{
	char	*str;
	int		tmp;
	int		len;

	tmp = n;
	len = 0;
	while (tmp >= 1)
	{
		tmp /= 10;
		len++;
	}
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	tmp = n;
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negative = 0;
	if (n < 0)
	{
		n *= -1;
		negative = 1;
	}
	str = i_to_a(n);
	if (negative)
		str[0] = '-';
	else if (n > 0)
		str = ft_memmove(str, str + 1, ft_strlen(str));
	return (str);
}
