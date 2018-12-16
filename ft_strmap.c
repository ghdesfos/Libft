/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 17:20:27 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/24 17:29:02 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		n;
	int		i;

	n = 0;
	while (s[n])
		n++;
	if (!(str = (char*)malloc(sizeof(char) * (n + 1))))
		return (0);
	str[n] = 0;
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
