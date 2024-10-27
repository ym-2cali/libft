/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:51:07 by yael-maa          #+#    #+#             */
/*   Updated: 2024/10/26 05:17:23 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*DST;
	unsigned char	*SRC;
	size_t	i;

	if (!src && !dst)
		return (NULL);
	DST = (unsigned char *)dst;
	SRC = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		DST[i] = SRC[i];
		i++;
	}
	return (dst);
}
