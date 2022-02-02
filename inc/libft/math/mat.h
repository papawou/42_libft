#ifndef FT_MATH_MAT_H
#define FT_MATH_MAT_H

#define MAT4_ID                                              \
	{                                                          \
		{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, { 0, 0, 0, 1 } \
	}

typedef struct s_mat4
{
	float m[4][4];
} t_mat4;

#include "libft/math/vec.h"

t_vec4 ft_mult_mat_vec(t_mat4 m, t_vec4 v);
t_mat4 mult_mat_mat(t_mat4 a, t_mat4 b);

#endif