/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 21:56:14 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/22 22:33:51 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char	*str;

	str = s1;
	while (*str)
		str++;
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = 0;
	return (s1);
}
