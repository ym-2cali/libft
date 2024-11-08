/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:29:03 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/04 11:47:44 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	check;

	//to check
	check = count * size;
	if (size == 0)
	{
		s = malloc(0);
		return (s);
	}
	s = malloc(check);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
