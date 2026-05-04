/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.C                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 21:02:15 by sebsilve          #+#    #+#             */
/*   Updated: 2026/05/04 21:02:15 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list	*lst, void	(*del)(void*))
{
	if(!lst || !del)
		return ; 
	del(lst->content);
	free(lst);
}
