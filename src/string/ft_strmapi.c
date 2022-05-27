/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:37:12 by kmendes           #+#    #+#             */
/*   Updated: 2021/10/30 17:37:12 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/ft_string.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*out;
	size_t		s_len;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	out = malloc(s_len + 1);
	if (!out)
		return (NULL);
	out[s_len] = 0;
	while (s_len--)
		out[s_len] = (*f)(s_len, s[s_len]);
	return (out);
}
