/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 17:41:57 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/24 14:48:28 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	n;
	unsigned int	i;

	n = 0;
	while (s[n])
		n++;
	if (!(str = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	str[n] = 0;
	i = 0;
	while (i < n)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
