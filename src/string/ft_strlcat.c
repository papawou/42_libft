/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:11:03 by kmendes           #+#    #+#             */
/*   Updated: 2021/11/01 17:37:30 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	i = 0;
	if (dstsize)
	{
		while (len_dst + i < dstsize - 1 && src[i])
		{
			dst[len_dst + i] = src[i];
			++i;
		}
		dst[len_dst + i] = 0;
	}
	while (src[i])
		++i;
	if (dstsize < len_dst)
		return (i + dstsize);
	return (i + len_dst);
}
