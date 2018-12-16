/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 20:38:40 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/25 18:30:35 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	s = src;
	d = dst;
	i = -1;
	if (s < d)
		while ((int)(--len) >= 0)
			d[len] = s[len];
	else
		while (++i < len)
			d[i] = s[i];
	return (dst);
}
