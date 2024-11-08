/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:22:10 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/04 12:12:42 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	//to check
	char	*d;
	size_t	i;
	size_t	slen;
	size_t	size;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		size = 0;
	else if (slen - start < len)
		size = slen - start;
	else
		size = len;
	d = (char *)malloc(sizeof(char) * (size + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (i < len)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
