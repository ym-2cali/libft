/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <yael-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:23:22 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/12 02:48:43 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cmp_str(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (needle[j] && haystack[k] == needle[j] && k < len)
			{
				j++;
				k++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!haystack && !len)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	return (cmp_str(haystack, needle, len));
}
