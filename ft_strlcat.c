/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 20:06:43 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/05 14:48:17 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0 || dst_len >= size)
		return (size + src_len);
	while (*src && dst_len + 1 < size)
	{
		dest[dst_len] = *src;
		dst_len++;
		src++;
	}
	dest[dst_len] = '\0';
	return (dst_len + src_len);
}
