/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:21:29 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/04 04:33:18 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ilen(int n)
{
	long long int	c;
	int				size;

	c = n;
	size = 0;
	if (c == 0)
		return (2);
	if (c < 0)
		size = 1;
	while (c)
	{
		c /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long long int	m;
	char			*s;
	int				len;

	m = n;
	len = ft_ilen(m);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	len--;
	if (n < 0)
		m *= -1;
	while (len >= 0)
	{
		s[len] = m % 10 + 48;
		m /= 10;
		len--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
