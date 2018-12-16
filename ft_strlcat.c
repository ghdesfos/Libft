/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 22:10:22 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/12/15 22:01:04 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, \
		const char *restrict src, size_t size)
{
	unsigned	int i;
	unsigned	int j;
	unsigned	int k;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size);
}
