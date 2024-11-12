/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 02:27:21 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/12 02:27:23 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*x1;
	const unsigned char	*x2;
	size_t				i;

	x1 = s1;
	x2 = s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && x1[i] == x2[i])
		i++;
	return (x1[i] - x2[i]);
}
