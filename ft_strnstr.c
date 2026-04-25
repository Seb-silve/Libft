/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:10:59 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/25 14:10:59 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char	*sentence, const char	*word, size_t len)
{
	size_t	word_len;

	if (word[0] == '\0')
		return ((char *)sentence);
	word_len = ft_strlen(word);
	while (*sentence != '\0' && len >= word_len)
	{
		if (ft_memcmp(sentence, word, word_len) == 0)
			return ((char *)sentence);
		sentence++;
		len--;
	}
	return (NULL);
}
