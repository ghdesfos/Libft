/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 21:50:11 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/22 21:56:00 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		strend;

	strend = 0;
	i = 0;
	while (i < len)
	{
		if (src[i] == 0)
			strend = 1;
		if (strend == 0)
			dst[i] = src[i];
		else
			dst[i] = 0;
		i++;
	}
	return (dst);
}
