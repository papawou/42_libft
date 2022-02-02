#ifndef FT_MATH_ROT_H
#define FT_MATH_ROT_H

#include "libft/math/vec.h"
#include "libft/math/quat.h"

typedef t_vec3 t_euler;
typedef t_vec4 t_axisg;

t_quat axisg_to_quat(t_axisg ag);

t_mat4 euler_to_mat(t_euler v);
t_quat euler_to_quat(t_euler v);

#endif