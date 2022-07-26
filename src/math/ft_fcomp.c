/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcomp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:27:09 by kmendes           #+#    #+#             */
/*   Updated: 2022/05/31 03:35:08 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fcompswap(float *a, float *b)
{
	float	tmp;

	if (*a < *b)
		return (0);
	tmp = *a;
	*a = *b;
	*b = tmp;
	return (1);
}

float	ft_fcomp(float a, float b)
{
	if (a < b)
		return (a);
	return (b);
}

float	ft_fmcomp(float a, float b)
{
	if (a < b)
		return (b);
	return (a);
}
