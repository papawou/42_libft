/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:29:38 by kmendes           #+#    #+#             */
/*   Updated: 2022/08/18 14:09:57 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/math/ft_utils.h"

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
