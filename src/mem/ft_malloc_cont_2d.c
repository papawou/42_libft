/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_cont_2d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:33:30 by kmendes           #+#    #+#             */
/*   Updated: 2022/06/01 13:12:10 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/ft_mem.h"

void	ft_free_malloc_cont_2d(void **ar)
{
	free(ar[0]);
	free(ar);
}

void	**ft_malloc_cont_2d(unsigned int nrows, unsigned int ncols,
	size_t size_type)
{
	unsigned int	i;
	void			**ar;

	ar = (void **)ft_malloc(sizeof(void *) * nrows);
	ar[0] = (void *)ft_malloc(size_type * nrows * ncols);
	i = 1;
	while (i < nrows)
	{
		ar[i] = ((char *)ar[0]) + size_type * i * ncols;
		++i;
	}
	return (ar);
}

void	ft_free_malloc_2d(void **ar, unsigned int nrows)
{
	unsigned int	i;

	i = 0;
	while (i < nrows)
	{
		free(ar[i]);
		++i;
	}
	free(ar);
}

void	**ft_malloc_2d(unsigned int nrows, unsigned int ncols, size_t size_type)
{
	unsigned int	i;
	void			**ar;

	ar = (void **)ft_malloc(sizeof(void *) * nrows);
	i = 0;
	while (i < ncols)
	{
		ar[i] = (void *)ft_malloc(size_type * ncols);
		++i;
	}
	return (ar);
}
