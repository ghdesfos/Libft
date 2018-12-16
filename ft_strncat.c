/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 22:05:16 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/22 22:34:03 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = s1;
	while (*str)
		str++;
	while (s2[i] && i < n)
	{
		str[i] = s2[i];
		i++;
	}
	str[i] = 0;
	return (s1);
}
