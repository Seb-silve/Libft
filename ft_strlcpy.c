/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:23:54 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/20 19:23:54 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  len;

    len = 0;
    while (src[len])
        len++;
    if (size == 0)
        return len;
    while (size-- > 1 && *src)
        *dst++ = *src++;
    *dst = '\0';
    return len;
}
