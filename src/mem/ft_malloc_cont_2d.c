#include <stdlib.h>
#include "libft/ft_mem.h"

void	**ft_malloc_cont_2d(unsigned int nrows, unsigned int ncols, size_t size_type)
{
	unsigned int	i;
	void					**ar;

	ar = (void **)ft_malloc(sizeof(void *) * nrows);
	ar[0] = (void *)ft_malloc(size_type * nrows * ncols);
	if (ar[0] == NULL)
		exit(EXIT_FAILURE);
	i = 1;
	while (i < nrows)
	{
		ar[i] = ((char *)ar[0]) + size_type * i * ncols;
		++i;
	}
	return (ar);
}