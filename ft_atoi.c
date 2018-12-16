/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 13:51:42 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/25 20:44:24 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	n;
	int		sign;

	sign = 1;
	while (*str == 9 || *str == 10 || *str == 11 || \
			*str == 12 || *str == 13 || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	n = 0;
	while (*str >= 48 && *str <= 57)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return ((int)(n * sign));
}
