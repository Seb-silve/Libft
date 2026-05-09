/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 20:41:54 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/09 20:41:54 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*joint;
	size_t	index;
	char	*joint0;

	len = ft_strlen(s1);
	len += ft_strlen(s2);
	joint = malloc(len + 1);
	if (!joint)
		return (NULL);
	joint0 = joint;
	index = 0;
	while (s1[index])
	{
		*joint++ = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
	{
		*joint ++ = s2[index];
		index ++;
	}
	*joint	= '\0';
	return (joint0);
}