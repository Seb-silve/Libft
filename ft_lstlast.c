/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:27:18 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/04 12:27:18 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	t_list *p;

	if (!lst)
		return (NULL);
	p = lst;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return (p);
}
