/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:24:59 by kmendes           #+#    #+#             */
/*   Updated: 2021/10/30 17:24:59 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*llst;

	llst = ft_lstlast(*alst);
	if (llst)
		llst->next = new;
	else
		*alst = new;
}
