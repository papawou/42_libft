/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:28:21 by kmendes           #+#    #+#             */
/*   Updated: 2022/08/18 14:09:02 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/math/ft_utils.h"

double	ft_clamp(double min, double max, double value)
{
	if (value < min)
		return (min);
	if (value > max)
		return (max);
	return (value);
}

double	ft_lerp(double start, double end, double alpha)
{
	return ((1 - alpha) * start + alpha * end);
}

double	ft_invlerp(double start, double end, double value)
{
	return ((value - start) / (end - start));
}

double	ft_remap(t_remap_p p, double value)
{
	return (ft_lerp(p.out_a, p.out_b, ft_invlerp(p.input_a, p.input_b, value)));
}
