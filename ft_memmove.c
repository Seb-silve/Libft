/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:44:12 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/20 18:44:12 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void	*destination, const void	*source, size_t size)
{
		unsigned char	*d;
		const unsigned char	*s;

		d = (unsigned char*) destination;
		s = (const unsigned char*) source;
		if(d == s)
			return (destination);
		if(d < s)
		{
			while(size--)
				*d++ = *s++;
		}
		else
    {
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
		}
	return (destination);
}