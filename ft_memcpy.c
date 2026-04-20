/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:06:55 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/19 16:06:55 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include 'libft.h'

void	*ft_memcpy(void	*dest, const void *src, size_t count)
{
	unsigned char	*d;
	const unsigned char	*s;
	 
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;

	while(count--)
		*d++ = *s++;
	return (dest);
}