/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <yael-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:26:00 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/12 04:06:09 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	ls;

	ls = ft_strlen(s);
	while (ls > 0)
	{
		if (s[ls] == (char)c)
			return ((char *)&s[ls]);
		ls--;
	}
	if (ls == 0 && s[0] == (char)c)
		return ((char *)s);
	return (NULL);
}
