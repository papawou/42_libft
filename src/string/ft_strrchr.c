/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:50:16 by kmendes           #+#    #+#             */
/*   Updated: 2022/05/31 03:34:44 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (char) c)
			return ((char *)(s + i));
		if (i == 0)
			break ;
		--i;
	}
	return (NULL);
}
