/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:02:09 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/25 20:02:09 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char	*s)
{
	size_t	len;
	char	*copy;
	char	*start;

	len = ft_strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	start = copy;
	while (*s)
	{
		*copy = *s;
		copy++;
		s++;
	}
	*copy = '\0';
	return (start);
}
