/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:30:37 by kmendes           #+#    #+#             */
/*   Updated: 2021/10/30 17:30:37 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lst.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_lst;

	while (*lst)
	{
		(*del)((*lst)->content);
		tmp_lst = *lst;
		*lst = (*lst)->next;
		free(tmp_lst);
	}
	*lst = NULL;
}
