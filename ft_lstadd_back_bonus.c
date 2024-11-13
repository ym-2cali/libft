/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <yael-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:56:12 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/13 01:24:42 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if(!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else 
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
