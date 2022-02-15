int ft_compswap(int *a, int *b)
{
	int tmp;

	if (*a < *b)
		return 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return 1;
}

int ft_fcompswap(float *a, float *b)
{
	float tmp;

	if (*a < *b)
		return 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return 1;
}

int ft_dcompswap(double *a, double *b)
{
	double tmp;

	if (*a < *b)
		return 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return 1;
}