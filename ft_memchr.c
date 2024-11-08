/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:50:08 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/04 11:51:57 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	//to check
	d = (unsigned char	*)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (char)c)
			return ((void *)&d[i]);
		i++;
	}
	return (NULL);
}
