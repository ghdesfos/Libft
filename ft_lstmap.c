/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:40:07 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/09/26 17:55:23 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *newlst;

	if (!lst)
		return (NULL);
	newlst = f(lst);
	new = newlst;
	lst = lst->next;
	while (lst)
	{
		new->next = f(lst);
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	return (newlst);
}
