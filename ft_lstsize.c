/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:21:44 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/04 12:21:44 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "iibft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;
	t_list	*p;

	size = 0;
	p = lst;
	while (p != NULL)
	{
		size++;
		p = p->next;
	}
	return (size);
}
