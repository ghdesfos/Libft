/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:28:49 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/26 12:54:07 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (content == 0)
	{
		new->content = 0;
		new->content_size = 0;
	}
	else
	{
		new->content = (void*)content;
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
