/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <yael-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:45:41 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/12 04:03:48 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		s;
	long	result;

	s = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (result > (LONG_MAX - (*str - '0')) / 10)
			return (check_sign(s));
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * s));
}  
