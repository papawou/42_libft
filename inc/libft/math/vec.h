#ifndef FT_MATH_VEC_H
#define FT_MATH_VEC_H

typedef struct s_vec2
{
	float x;
	float y;
} t_vec2;

typedef struct s_vec3
{
	float x;
	float y;
	float z;
} t_vec3;

typedef struct s_vec4
{
	float x;
	float y;
	float z;
	float w;
} t_vec4;

t_vec4 vec4_norm(t_vec4 v);

#endif