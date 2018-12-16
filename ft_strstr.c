/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 23:21:06 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/22 23:41:48 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int n;
	int i;

	n = 0;
	while (needle[n])
		n++;
	if (*needle == 0)
		return ((char*)haystack);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
			i++;
		if (i == n)
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}
