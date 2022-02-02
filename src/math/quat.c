
#include <math.h>
#include "libft/math/quat.h"


t_quat quat_norm(t_quat q)
{
	t_quat dst;
	float magn;

	magn = sqrt(q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w);
	dst.x = q.x / magn;
	dst.y = q.y / magn;
	dst.z = q.z / magn;
	dst.w = q.w / magn;
	return dst;
}

/*
	hamilton product
		a * b
	b applied first
*/
t_quat quat_mult(t_quat a, t_quat b, int norm)
{
	t_quat dst;

	dst.x = a.w * b.x + a.x * b.w + a.y * b.z - a.z * b.y;
	dst.y = a.w * b.y + a.y * b.w + a.z * b.x - a.x * b.z;
	dst.z = a.w * b.z + a.z * b.w + a.x * b.y - a.y * b.x;
	dst.w = a.w * b.w - a.x * b.x - a.y * b.y - a.z * b.z;

	if (norm)
		return quat_norm(dst);
	else
		return dst;
}

t_mat4 quat_to_mat(t_quat q)
{
	t_mat4 m;

	m.m[0][0] = 1 - 2 * q.y * q.y - 2 * q.z * q.z;
	m.m[0][1] = 2 * q.x * q.y - 2 * q.w * q.z;
	m.m[0][2] = 2 * q.x * q.z + 2 * q.w * q.y;
	m.m[0][3] = 0;
	m.m[1][0] = 2 * q.x * q.y + 2 * q.w * q.z;
	m.m[1][1] = 1 - 2 * q.x * q.x - 2 * q.z * q.z;
	m.m[1][2] = 2 * q.y * q.z - 2 * q.w * q.x;
	m.m[1][3] = 0;
	m.m[2][0] = 2 * q.x * q.z - 2 * q.w * q.y;
	m.m[2][1] = 2 * q.y * q.z + 2 * q.w * q.x;
	m.m[2][2] = 1 - 2 * q.x * q.x - 2 * q.y * q.y;
	m.m[2][3] = 0;
	m.m[3][0] = 0;
	m.m[3][1] = 0;
	m.m[3][2] = 0;
	m.m[3][3] = 1;
	return m;
}

t_quat quat_inv(t_quat q)
{
	t_quat dst;

	dst.x = -q.x;
	dst.y = -q.y;
	dst.z = -q.z;
	dst.w = q.w;
	return dst;
}
