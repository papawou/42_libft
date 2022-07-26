/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:19:10 by kmendes           #+#    #+#             */
/*   Updated: 2022/05/31 03:19:41 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_malloc(size_t s);
void	ft_free_malloc_cont_2d(void **ar);
void	**ft_malloc_cont_2d(unsigned int nrows, unsigned int ncols,
			size_t size_type);
void	ft_free_malloc_2d(void **ar, unsigned int nrows);
void	**ft_malloc_2d(unsigned int nrows, unsigned int ncols,
			size_t size_type);
#endif