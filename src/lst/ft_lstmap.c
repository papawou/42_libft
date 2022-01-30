/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:32:26 by kmendes           #+#    #+#             */
/*   Updated: 2021/10/30 17:32:26 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lst.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;

	if (!lst)
		return (NULL);
	out = ft_lstnew(f(lst->content));
	if (!out)
		return (NULL);
	if (lst->next)
	{
		out->next = ft_lstmap(lst->next, f, del);
		if (!out->next)
		{
			ft_lstdelone(lst, del);
			return (NULL);
		}
	}
	return (out);
}
