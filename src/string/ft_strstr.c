/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:40:09 by kmendes           #+#    #+#             */
/*   Updated: 2021/10/30 20:22:41 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strstr(const char *haystack, const char *needle)
{
	size_t	j;

	if (!*needle)
		return ((char *)(haystack));
	while (*haystack)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[j])
			++j;
		if (!needle[j])
			return ((char *)(haystack));
		++haystack;
	}
	return (NULL);
}
