/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 02:12:06 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/12 02:12:08 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	last;
	int	i;

	last = ft_lstsize(lst) - 1;
	i = 0;
	while (i < last)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
