/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 07:17:34 by kmendes           #+#    #+#             */
/*   Updated: 2021/11/01 17:37:30 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	out_size;

	if (!s1 || !s2)
		return (NULL);
	out_size = ft_strlen(s1) +ft_strlen(s2);
	out = malloc(out_size + 1);
	if (!out)
		return (NULL);
	out[out_size] = 0;
	while (*s1)
	{
		*out++ = *s1;
		++s1;
	}
	while (*s2)
	{
		*out++ = *s2;
		++s2;
	}
	return (out - out_size);
}
