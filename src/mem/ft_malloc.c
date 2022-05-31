/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:34:02 by kmendes           #+#    #+#             */
/*   Updated: 2022/05/31 03:34:02 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_malloc(size_t s)
{
	void	*p;

	p = (void *) malloc(s);
	if (p == NULL)
		exit(EXIT_FAILURE);
	return (p);
}
