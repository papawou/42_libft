/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 07:20:05 by kmendes           #+#    #+#             */
/*   Updated: 2021/11/01 17:37:30 by kmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "string.h"

static size_t	count_words(const char *s, const char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			++cnt;
			++s;
			while (*s && *s != c)
				++s;
		}
		while (*s && *s == c)
			++s;
	}
	return (cnt);
}

static char	*init_word(char **s, char c)
{
	size_t	tmp_cnt_word;
	char	*substr;

	tmp_cnt_word = 0;
	while (**s && **s == c)
		++*s;
	while ((*s)[tmp_cnt_word] && (*s)[tmp_cnt_word] != c)
		++tmp_cnt_word;
	substr = malloc(tmp_cnt_word + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, *s, tmp_cnt_word + 1);
	*s += tmp_cnt_word;
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**substrs;
	size_t	substrs_size;
	size_t	idx_sub;

	if (!s)
		return (NULL);
	substrs_size = count_words(s, c);
	substrs = malloc(sizeof(char *) * (substrs_size + 1));
	if (!substrs)
		return (NULL);
	substrs[substrs_size] = NULL;
	idx_sub = 0;
	while (idx_sub < substrs_size)
	{
		substrs[idx_sub] = init_word((char **)&s, c);
		if (!substrs[idx_sub])
		{
			while (idx_sub--)
				free(substrs[idx_sub]);
			return (NULL);
		}
		++idx_sub;
	}
	return (substrs);
}
