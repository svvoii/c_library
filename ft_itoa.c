/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbocanci <sbocanci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:47:09 by sbocanci          #+#    #+#             */
/*   Updated: 2022/11/27 16:34:44 by sbocanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put_nbr(long nbr, char *str, int *len)
{
	if (nbr < 0)
	{
		str[(*len)++] = '-';
		nbr *= -1;
	}
	if (nbr > 9)
	{
		put_nbr(nbr / 10, str, len);
		put_nbr(nbr % 10, str, len);
	}
	else
	{
		str[(*len)++] = nbr + '0';
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;

	nbr = n;
	len = 0;
	if (nbr <= 0)
	{
		if (nbr < 0)
			len++;
		len++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	len = 0;
	put_nbr(n, str, &len);
	str[len] = '\0';
	return (str);
}
