/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:06:33 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/20 21:06:33 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			return ((char *)&s[x]);
		x++;
	}
	if (c == '\0')
		return ((char *)&s[x]);
	return (NULL);
}