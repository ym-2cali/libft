/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <yael-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 02:12:06 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/13 01:32:09 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	last;
	int	i;

	if (!lst)
		return (NULL);
	last = ft_lstsize(lst) - 1;
	i = 0;
	while (i < last)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
