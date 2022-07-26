/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:20:12 by kmendes           #+#    #+#             */
/*   Updated: 2022/06/01 13:11:54 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# define PI 3.14159265358979323846

typedef struct s_remap_p
{
	double	input_a;
	double	input_b;
	double	out_a;
	double	out_b;
}	t_remap_p;

double		ft_clamp(double min, double max, double value);
double		ft_lerp(double start, double end, double alpha);
double		ft_invlerp(double start, double end, double value);
double		ft_remap(t_remap_p p, double value);
float		deg_to_rad(float deg);
float		rad_to_deg(float rad);
double		ft_fabs(double a);
int			ft_abs(int a);
int			ft_compswap(int *a, int *b);
int			ft_fcompswap(float *a, float *b);
int			ft_dcompswap(double *a, double *b);
int			ft_comp(int a, int b);
float		ft_fcomp(float a, float b);
int			ft_mcomp(int a, int b);
float		ft_fmcomp(float a, float b);
#endif