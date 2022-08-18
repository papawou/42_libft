/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:02:53 by kmendes           #+#    #+#             */
/*   Updated: 2022/08/18 13:53:51 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

#include "libft/ft_string.h"

int	ft_atoi(const char *str)
{
	unsigned int	nb;
	int				sign;

	nb = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		++str;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str && ft_isdigit(*str))
	{
		nb *= 10;
		nb += *str - '0';
		++str;
	}
	return (nb * sign);
}

static char	*ft_atoi_safe_2(char *str, int *sign)
{
	*sign = 1;
	while (*str && ft_isspace(*str))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign = -1;
		++str;
	}
	return (str);
}

int	ft_atoi_safe(char *str, int *dst)
{
	int	nb;
	int	sign;
	int	acc;

	if (!str || !dst)
		return (1);
	nb = 0;
	str = ft_atoi_safe_2(str, &sign);
	if (!ft_isdigit(*str))
		return (1);
	while (*str && ft_isdigit(*str))
	{
		if ((nb < 0 && (INT_MIN / 10) > nb) || (nb > 0 && (INT_MAX / 10) < nb))
			return (1);
		nb *= 10;
		acc = (*str - '0') * sign;
		if ((acc < 0 && (INT_MIN - acc) > nb)
			|| (acc > 0 && (INT_MAX - acc) < nb))
			return (1);
		nb += acc;
		++str;
	}
	*dst = nb;
	return (0);
}
