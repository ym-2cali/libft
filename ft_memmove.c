/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:21:36 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/04 11:59:08 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!src && !dst)
		return (NULL);
	d = dst;
	s = src;
	if (d > s)
	{
		while (len >= 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
