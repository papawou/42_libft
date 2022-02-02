#ifndef FT_MATH_QUAT_H
#define FT_MATH_QUAT_H

#include "libft/math/vec.h"
#include "libft/math/mat.h"

#define QUAT_ID \
	{             \
		0, 0, 0, 1  \
	}

typedef t_vec4 t_quat;

t_quat quat_norm(t_quat q);
t_quat quat_mult(t_quat a, t_quat b, int norm);
t_mat4 quat_to_mat(t_quat q);
t_quat quat_inv(t_quat q);

#endif