/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 06:04:08 by kmendes           #+#    #+#             */
/*   Updated: 2021/11/01 17:37:30 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;

	if (!s)
		return (NULL);
	while (*s && start)
	{
		++s;
		--start;
	}
	if (start)
		return (ft_strdup(""));
	while (s[start] && start < len)
		++start;
	output = malloc(start + 1);
	if (!output)
		return (NULL);
	output[start] = 0;
	while (start)
	{
		--start;
		output[start] = s[start];
	}
	return (output);
}
