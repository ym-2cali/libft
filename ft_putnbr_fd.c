/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-maa <yael-maa@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-06 11:15:25 by yael-maa          #+#    #+#             */
/*   Updated: 2024-11-06 11:15:25 by yael-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	i;
	long long	r;

	r = n;
	if (r < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-r, fd);
	}
	else if (r >= 0 && r <= 9)
	{
		i = r + 48;
		write(fd, &i, 1);
	}
	else
	{
		ft_putnbr_fd(r / 10, fd);
		ft_putnbr_fd(r % 10, fd);
	}
}
