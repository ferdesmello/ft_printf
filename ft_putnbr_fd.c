/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:15:37 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/17 15:15:38 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	long_n;
	char		c;

	long_n = n;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n = -long_n;
	}
	if (long_n > 9)
	{
		ft_putnbr_fd(long_n / 10, fd);
	}
	c = (long_n % 10) + '0';
	write(fd, &c, 1);
}
