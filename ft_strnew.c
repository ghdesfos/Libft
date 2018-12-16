/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:14:49 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/24 20:42:40 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size + 1)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
