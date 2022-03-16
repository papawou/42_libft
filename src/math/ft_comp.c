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

int ft_comp(int a, int b)
{
	if (a < b)
		return a;
	return b;
}

float ft_fcomp(float a, float b)
{
	if (a < b)
		return a;
	return b;
}

int ft_mcomp(int a, int b)
{
	if (a < b)
		return b;
	return a;
}

float ft_fmcomp(float a, float b)
{
	if (a < b)
		return b;
	return a;
}
