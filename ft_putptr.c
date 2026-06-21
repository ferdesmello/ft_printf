/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 00:02:06 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/21 00:02:07 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *n)
{
	unsigned long	address;
	char			c;
	int				count;
	const char 		*set;

	if (!n)
	{
		write(1, "0", 1);
		return (1);
	}
	set = "0123456789abcdef";
	address = (unsigned long)n;
	count = 0;
	if (address > 9)
	{
		count += ft_putptr((void *)(address / 16));
	}
	c = set[address % 16];
	write(1, &c, 1);
	count++;
	return (count);
}