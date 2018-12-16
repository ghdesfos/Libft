/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 20:33:47 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/24 17:28:17 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	int		i;
	char	*str;

	l1 = 0;
	l2 = 0;
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (!(str = (char*)malloc(sizeof(char) * (l1 + l2 + 1))))
		return (0);
	i = -1;
	while (++i < l1)
		str[i] = s1[i];
	i = -1;
	while (++i < l1 + l2)
		str[l1 + i] = s2[i];
	str[l1 + l2] = 0;
	return (str);
}
