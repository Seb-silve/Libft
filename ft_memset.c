/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 20:34:32 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/05 14:57:53 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*h;
	unsigned int	byte;

	h = (unsigned char *) ptr;
	byte = (unsigned char) value;
	while (len--)
		*h++ = byte;
	return (ptr);
}
