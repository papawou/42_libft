/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:05:22 by kmendes           #+#    #+#             */
/*   Updated: 2021/11/01 17:37:30 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;

	res = malloc(ft_strlen(s1) + 1);
	if (res == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	return (ft_memcpy(res, s1, ft_strlen(s1) + 1));
}
