/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <yael-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:25:48 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/12 04:03:39 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	start;
	size_t	i;
	size_t	end;

	if (!s1 || !set)
		return (NULL); 
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	s2 = (char *)malloc(end - start + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		s2[i] = s1[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
