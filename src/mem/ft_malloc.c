#include <stdlib.h>

void	*ft_malloc(size_t s)
{
	void	*p;

	p = malloc(s);
	if (p == NULL)
		exit(EXIT_FAILURE);
	return (p);
}