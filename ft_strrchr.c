/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 22:58:31 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/20 22:58:31 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char*	last;
	int	x;

	x = 0;
	last = NULL;
	while (s[x])
	{
		if(s[x] == c)
			last = (char *)&s[x];
		x++;
	}
	if (c == '\0')
		return ((char *)&s[x]);
	return (last);
}