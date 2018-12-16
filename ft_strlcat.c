/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 22:10:22 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/11/14 22:03:10 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, \
		const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (dstsize < i + 2 || dstsize < 1)
		return (i + j);
	while (i + k < dst_size - 1 && k < j)
	{
		dst[i + k] = 
		k++;
	}
}




#include <stdio.h>

int main()
{
	char	dst[] = "0123456789";
	char	src[] = "abc";

	printf("%d", (int)ft_strlcat(dst, src, 15));
	return (0);
}
