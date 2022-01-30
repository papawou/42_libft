#include "math/inter.h"

double ft_lerp(double start, double end, double alpha)
{
	return (end - start) * alpha + start;
}

double ft_invlerp(double start, double end, double value)
{
	return (value - start) / (end - start);
}

double remap(double input_a, double input_b, double out_a, double out_b, double value)
{
	return ft_lerp(out_a, out_b, ft_invlerp(input_a, input_b, value));
}
