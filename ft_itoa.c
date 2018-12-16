/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 21:40:57 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/24 14:53:06 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_abs(int *n, int *sign)
{
	if (*n < 0)
	{
		*n = -*n;
		*sign = 1;
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	int		tmp;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	ft_abs(&n, &sign);
	tmp = n;
	len = 1 + sign;
	while (tmp /= 10)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = 0;
	str[0] = (sign == 1 ? '-' : '0');
	while (len > sign)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str);
}
