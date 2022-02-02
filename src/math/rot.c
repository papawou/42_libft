#include <math.h>
#include "libft/math/rot.h"

t_quat axisg_to_quat(t_axisg ag)
{
	t_quat dst;

	dst.x = ag.x * sin(ag.w / 2);
	dst.y = ag.y * sin(ag.w / 2);
	dst.z = ag.z * sin(ag.w / 2);
	dst.w = cos(ag.w / 2);

	return quat_norm(dst); //?useless call quat_norm
}

t_mat4 euler_to_mat(t_euler v)
{
	t_mat4 mat;

	float x = v.x;
	float y = v.y;
	float z = v.z;

	mat = (t_mat4){{{cos(y) * cos(z), cos(z) * sin(x) * sin(y) - cos(x) * sin(z), cos(x) * cos(z) * sin(y) + sin(x) * sin(z), 0},
									{cos(y) * sin(z), cos(x) * cos(z) + sin(x) * sin(y) * sin(z), cos(x) * sin(y) * sin(z) - cos(z) * sin(x), 0},
									{-sin(y), cos(y) * sin(x), cos(x) * cos(y), 0},
									{0, 0, 0, 1}}};
	return mat;
}

t_quat euler_to_quat(t_euler v)
{
	t_quat q;
	float cz = cos(v.z * 0.5);
	float sz = sin(v.z * 0.5);
	float cy = cos(v.y * 0.5);
	float sy = sin(v.y * 0.5);
	float cx = cos(v.x * 0.5);
	float sx = sin(v.x * 0.5);

	q.w = cx * cy * cz + sx * sy * sz;
	q.x = sx * cy * cz - cx * sy * sz;
	q.y = cx * sy * cz + sx * cy * sz;
	q.z = cx * cy * sz - sx * sy * cz;
	return quat_norm(q);
}