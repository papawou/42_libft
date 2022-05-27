#ifndef FT_UTILS_H
#define FT_UTILS_H

#define PI 3.14159265358979323846

double ft_clamp(double min, double max, double value);

double ft_lerp(double start, double end, double alpha);
double ft_invlerp(double start, double end, double value);
double ft_remap(double input_a, double input_b, double out_a, double out_b, double value);

float deg_to_rad(float deg);
float rad_to_deg(float rad);

double ft_fabs(double a);
int ft_abs(int a);

int ft_compswap(int *a, int *b);
int ft_fcompswap(float *a, float *b);
int ft_dcompswap(double *a, double *b);

int ft_comp(int a, int b);
float ft_fcomp(float a, float b);

int ft_mcomp(int a, int b);
float ft_fmcomp(float a, float b);

#endif