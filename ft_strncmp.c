/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:12:57 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/21 20:12:57 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while(s1[x] == s2[x] && n > 0 && (s1[x] || s2[x]))
	{
		x++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char )s1[x] - (unsigned char)s2[x]);
}
