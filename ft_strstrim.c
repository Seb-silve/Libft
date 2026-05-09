/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:04:54 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/09 13:33:25 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_contains(char const *set, char x)
{
	while (*set)
	{
		if (*set++ == x)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1);
		while (s1[start] && ft_contains(set, s1[start]))
			start++;
		while (end > start && ft_contains(set, s1[end - 1]))
			end--;
		end = end - start;
		return (ft_substr(s1, start, end));
}