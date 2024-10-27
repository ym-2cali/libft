/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:17:58 by yael-maa          #+#    #+#             */
/*   Updated: 2024/10/25 22:43:21 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*B;
	size_t	i;

	B = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		B[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
