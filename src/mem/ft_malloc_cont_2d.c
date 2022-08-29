/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_cont_2d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:33:30 by kmendes           #+#    #+#             */
/*   Updated: 2022/08/29 13:12:56 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/ft_mem.h"

void	ft_free_malloc_cont_2d(void **ar)
{
	if (!ar)
		return ;
	free(ar[0]);
	free(ar);
}

void	**ft_malloc_cont_2d(unsigned int nrows, unsigned int ncols,
	size_t size_type)
{
	unsigned int	i;
	void			**ar;

	ar = (void **)malloc(sizeof(void *) * nrows);
	if (ar == NULL)
		return (NULL);
	ar[0] = (void *)malloc(size_type * nrows * ncols);
	if (ar[0] == NULL)
	{
		free(ar);
		return (NULL);
	}
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

	if (ar == NULL)
		return ;
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

	ar = (void **)malloc(sizeof(void *) * nrows);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < ncols)
	{
		ar[i] = (void *)ft_malloc(size_type * ncols);
		if (ar[i] == NULL)
		{
			while (i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
		++i;
	}
	return (ar);
}
