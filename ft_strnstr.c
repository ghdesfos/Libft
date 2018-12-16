/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 23:42:02 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/25 20:38:47 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;
	size_t i;
	size_t j;

	if (*needle == 0)
		return ((char*)haystack);
	n = 0;
	while (needle[n])
		n++;
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (j == n)
				return (&((char*)haystack)[i]);
		}
		i++;
	}
	return (NULL);
}
