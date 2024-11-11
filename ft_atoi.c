/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:45:41 by yael-maa          #+#    #+#             */
/*   Updated: 2024/11/05 11:34:05 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int 	number;

	sign = 1;
	number =0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - 48;
		if (number < 0 && sign == 1)
			return (-1);
		else if (number < 0 && sign == -1)
			return (0);
		str++;
	}
	return (number * sign);
}
#include <string.h>
int	main()
{
	printf("%d\n", ft_atoi(strdup("1844674407370955161566")));
	printf("%d\n", atoi(strdup("1844674407370955161566")));
}


