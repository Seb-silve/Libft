/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:39:05 by sebsilve          #+#    #+#             */
/*   Updated: 2026/04/28 11:39:05 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_intLen(int	n)
{
	int	x;

	x = 0;
	if (n < 0)
	{
		n = -n;
		x++;
	}
	while (n > 0)
	{
		x++;
		n = n / 10;
	}
	if (x == 0)
		return (1);
	return (x);
}

char	*ft_itoa(int	n)
{
	char	*p;
	int	index;
	long nb;

	nb = (long) n;
	index = ft_intLen(n);
	p = malloc(index + 1);
	if (p == NULL)
		return (NULL);
	if (nb < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	p[index] = '\0';
	if (nb == 0)
		p[0] = '0';
	while (nb > 0)
	{
		p[--index] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (p);
}