/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 21:14:12 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/25 19:09:10 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = s;
	while (str[i] != 0 && i < n)
	{
		if (str[i] == (char)c)
			return ((void*)&str[i]);
		i++;
	}
	if (str[i] == 0 && c == 0)
		return ((void*)&str[i]);
	return (0);
}
