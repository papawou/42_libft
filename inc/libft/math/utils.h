#ifndef FT_MATH_UTILS_H
#define FT_MATH_UTILS_H

#define PI 3.14159265358979323846

double ft_lerp(double start, double end, double alpha);
double ft_invlerp(double start, double end, double value);
double ft_remap(double input_a, double input_b, double out_a, double out_b, double value);

float deg_to_rad(float deg);
float rad_to_deg(float rad);

#endif