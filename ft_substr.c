/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:09:54 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/05 14:59:28 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*p0;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start < s_len && len > s_len - start)
		len = s_len - start;
	p = malloc(len +1);
	if (p == NULL)
		return (NULL);
	if (start >= s_len)
	{
		p[0] = '\0';
		return (p);
	}
	p0 = p;
	while (len > 0)
	{
		*p++ = s[start++];
		len--;
	}
	*p = '\0';
	return (p0);
}
