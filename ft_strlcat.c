/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 22:10:22 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/12/15 22:10:19 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, \
		const char *restrict src, size_t size)
{
	size_t i;
	size_t j;
	size_t len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
		dst[i++] = src[j++];
	if (size != 0 && size >= len_dst)
		dst[i] = '\0';
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + len_dst);
}
