/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:30:17 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/22 19:30:17 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t	x;
	
	x = 0;
	p1 = s1;
	p2 = s2;
	while (n > 0 && p1[x] == p2[x])
	{
		x++;
		n--;
	}
	if (n == 0)
		return (0);
	return (p1[x] - p2[x]);
}
