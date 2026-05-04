/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:52:16 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/27 16:52:16 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_c_num(char const	*s, char c)
{
	size_t	num;

	num = 0;
	while (*s)
	{
		if (*s == c)
			num++;
		s++;
	}
	return (num + 1);
}

size_t	ft_word_len(char	*s, char	c)
{
	int	x;

	x = 0;
	while(s[x] && s[x] != c)
		x++;
	return (x);
}

char	**ft_split(char const *s, char	c)
{
	size_t	c_numb;
	int	x;
	char	**split;

	c_numb = ft_c_num(s, c);
	x = 0;
	split = malloc(sizeof(char *) * (c_numb + 1));
	if (split == NULL)
		return (NULL);
	while (*s)
	{
		split[x] = ft_substr(s, 0, ft_word_len(s, c));
		if (split[x] == NULL)
		{
			while (x > 0)
				free(split[--x]);
			free(split);
			return (NULL);
		}
		s += ft_word_len(s, c) + (*s != '\0');
		x++;
	}
	split[x] = NULL;
	return (split);
}
