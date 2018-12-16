/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 21:11:19 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/24 14:53:31 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_words(char const *s, char c)
{
	int n;

	n = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s)
			n++;
		while (*s && *s != c)
			s++;
		while (*s == c)
			s++;
	}
	return (n);
}

static int	ft_word_length(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nbwords;
	int		i;
	int		j;
	int		wordlen;

	nbwords = ft_nbr_words(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (nbwords + 1))))
		return (NULL);
	tab[nbwords] = NULL;
	i = 0;
	while (i < nbwords)
	{
		while (*s == c)
			s++;
		wordlen = ft_word_length(s, c);
		if (!(tab[i] = (char*)malloc(sizeof(char) * (wordlen + 1))))
			return (NULL);
		j = 0;
		while (j < wordlen)
			tab[i][j++] = *s++;
		tab[i][j] = 0;
		i++;
	}
	return (tab);
}
