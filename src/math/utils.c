#include "libft/math/utils.h"

double ft_lerp(double start, double end, double alpha)
{
	return (end - start) * alpha + start;
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
