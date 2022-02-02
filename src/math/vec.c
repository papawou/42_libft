#include <math.h>
#include "libft/math/vec.h"

t_vec4 vec4_norm(t_vec4 v)
{
	t_vec4 dst;
	float magn;

	magn = sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
	dst.x = v.x * magn;
	dst.y = v.y * magn;
	dst.z = v.z * magn;
	dst.w = v.w * magn;
	return dst;
}