#ifndef FT_MEM_H
#define FT_MEM_H

#include <stdlib.h>

/* ft_bzero.c */
void ft_bzero(void *s, size_t n);
/* ft_calloc.c */
void *ft_calloc(size_t count, size_t size);
/* ft_memchr.c */
void *ft_memchr(const void *s, int c, size_t n);
/* ft_memcmp.c */
int ft_memcmp(const void *s1, const void *s2, size_t n);
/* ft_memcpy.c */
void *ft_memcpy(void *dst, const void *src, size_t n);
/* ft_memmove.c */
void *ft_memmove(void *dst, const void *src, size_t len);
/* ft_memset.c */
void *ft_memset(void *b, int c, size_t len);

void **ft_malloc_cont_2d(unsigned int nrows, unsigned int ncols, size_t size_type);

#endif