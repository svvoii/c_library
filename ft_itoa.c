/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:47:09 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/26 15:59:08 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*i_to_a(long nbr, int len)
{
	char	*str;

	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;

	nbr = n;
	len = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	else if (nbr < 0)
		nbr *= -1;
	while (nbr >= 1)
	{
		nbr /= 10;
		len++;
	}
	nbr = n;
	str = i_to_a(nbr, len);
	if (n < 0)
		str[0] = '-';
	return (str);
}
