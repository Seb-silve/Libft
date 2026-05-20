/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:52:16 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/05 15:00:37 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static size_t	ft_word_len(char *s, char c)
{
	int	x;

	x = 0;
	while (s[x] && s[x] != c)
		x++;
	return (x);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		x;

	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	x = 0;
	while (*s)
	{
		while (*s == c)  // skip les séparateurs
			s++;
		if (!*s)
			break ;
		split[x] = ft_substr(s, 0, ft_word_len((char *)s, c));
		if (!split[x])
		{
			while (x >= 0)   // fix: libère aussi split[0]
				free(split[x--]);
			free(split);
			return (NULL);
		}
		s += ft_word_len((char *)s, c);
		x++;
	}
	split[x] = NULL;
	return (split);
}
