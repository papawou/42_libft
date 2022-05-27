#include "libft/math/ft_utils.h"

double ft_clamp(double min, double max, double value)
{
	if (value < min)
		return min;
	if (value > max)
		return max;
	return value;
}

double ft_lerp(double start, double end, double alpha)
{
	return (1 - alpha) * start + alpha * end;
}

double ft_invlerp(double start, double end, double value)
{
	return (value - start) / (end - start);
}

double ft_remap(double input_a, double input_b, double out_a, double out_b, double value)
{
	return ft_lerp(out_a, out_b, ft_invlerp(input_a, input_b, value));
}

float deg_to_rad(float deg)
{
	return deg * PI / 180.0;
}

float rad_to_deg(float rad)
{
	return rad * 180.0 / PI;
}

int ft_abs(int a)
{
	if (a < 0)
		return -a;
	else
		return a;
}

double ft_fabs(double a)
{
	if (a < 0.0)
		return -a;
	else
		return a;
}