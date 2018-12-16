/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 23:16:04 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/25 20:26:04 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*add;
	int			i;

	i = 0;
	add = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			add = &s[i];
		i++;
	}
	if (add != NULL)
		return ((char*)add);
	if (s[i] == (char)c)
		return (&((char*)s)[i]);
	return (NULL);
}
