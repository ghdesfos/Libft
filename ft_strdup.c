/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 21:30:05 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/24 12:04:25 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (s1[len])
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
	{
		errno = ENOMEM;
		return (0);
	}
	str[len] = 0;
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
