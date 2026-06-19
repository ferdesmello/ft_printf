/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:15:37 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/19 06:06:34 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	long int	long_n;
	char		c;
	int		count;

	long_n = n;
	count = 0;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n = -long_n;
		count++;
	}
	if (long_n > 9)
	{
		count += ft_putnbr_fd(long_n / 10, fd);
	}
	c = (long_n % 10) + '0';
	write(fd, &c, 1);
	count++;
	return (count);
}
