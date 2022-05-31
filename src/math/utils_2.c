/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:29:38 by kmendes           #+#    #+#             */
/*   Updated: 2022/05/31 03:32:42 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/math/ft_utils.h"

double	ft_remap(t_remap_p p, double value)
{
	return (ft_lerp(p.out_a, p.out_b, ft_invlerp(p.input_a, p.input_b, value)));
}

float	deg_to_rad(float deg)
{
	return (deg * PI / 180.0);
}

float	rad_to_deg(float rad)
{
	return (rad * 180.0 / PI);
}

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}

double	ft_fabs(double a)
{
	if (a < 0.0)
		return (-a);
	else
		return (a);
}
