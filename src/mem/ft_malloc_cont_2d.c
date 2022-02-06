#include <stdlib.h>

void **ft_malloc_cont_2d(unsigned int nrows, unsigned int ncols, size_t size_type)
{
	void **ar = (void **)malloc(sizeof(void *) * nrows);
	ar[0] = (void *)malloc(size_type * nrows * ncols);
	unsigned int i = 1;
	while (i < nrows)
	{
		ar[i] = ((char *)ar[0]) + size_type * i * ncols;
		++i;
	}
	return ar;
}