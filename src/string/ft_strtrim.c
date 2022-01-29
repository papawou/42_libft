/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 04:20:35 by kmendes           #+#    #+#             */
/*   Updated: 2021/11/01 17:37:30 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*output;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size - 1]))
		--size;
	output = malloc(size + 1);
	if (!output)
		return (NULL);
	output[size] = 0;
	while (size--)
		output[size] = s1[size];
	return (output);
}
