/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 02:09:17 by kmendes           #+#    #+#             */
/*   Updated: 2021/10/30 21:45:54 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	itoa_size(int n)
{
	int	cnt;

	if (n < 0)
		cnt = 2;
	else
		cnt = 1;
	while (n <= -10 || 10 <= n)
	{
		n /= 10;
		++cnt;
	}
	return (cnt);
}

static char	*fill_itoa(unsigned int n, char *dst)
{
	if (n < 10)
		*dst = n + '0';
	else
	{
		dst = fill_itoa(n / 10, dst);
		*dst = (n % 10) + '0';
	}
	return (dst + 1);
}

char	*ft_itoa(int n)
{
	char	*output;

	output = malloc(itoa_size(n) + 1);
	if (!output)
		return (NULL);
	if (n < 0)
	{
		*output = '-';
		*fill_itoa(-n, output + 1) = 0;
	}
	else
		*fill_itoa(n, output) = 0;
	return (output);
}
