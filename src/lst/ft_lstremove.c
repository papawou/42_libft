/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:08:28 by kmendes           #+#    #+#             */
/*   Updated: 2022/06/16 15:11:37 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/ft_lst.h"

void	ft_lstremove(t_list **lst, t_list *item, void (*del)(void *))
{
	t_list	*tmp_item;

	if (lst == NULL || item == NULL)
		return ;
	if (*lst == item)
	{
		*lst = item->next;
		ft_lstdelone(item, del);
		return ;
	}
	tmp_item = *lst;
	while (tmp_item)
	{
		if (tmp_item->next == item)
		{
			tmp_item->next = item->next;
			ft_lstdelone(item, del);
			return ;
		}
		tmp_item = tmp_item->next;
	}
}
