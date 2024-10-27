/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:21:36 by yael-maa          #+#    #+#             */
/*   Updated: 2024/10/26 22:11:12 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*DST;
	const unsigned char	*SRC;

	if (!src && !dst)
		return (NULL);
	DST = dst;
	SRC = src;
	if (DST > SRC)
	{
		while (len >= 0)
		{
			DST[len] = SRC[len];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
