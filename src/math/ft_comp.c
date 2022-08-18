/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:25:10 by kmendes           #+#    #+#             */
/*   Updated: 2022/08/17 20:00:46 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_compswap(int *a, int *b)
{
	int	tmp;

	if (!a || !b)
		exit(EXIT_FAILURE);
	if (*a < *b)
		return (0);
	tmp = *a;
	*a = *b;
	*b = tmp;
	return (1);
}

int	ft_dcompswap(double *a, double *b)
{
	double	tmp;

	if (!a || !b)
		exit(EXIT_FAILURE);
	if (*a < *b)
		return (0);
	tmp = *a;
	*a = *b;
	*b = tmp;
	return (1);
}

int	ft_comp(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	ft_mcomp(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}
