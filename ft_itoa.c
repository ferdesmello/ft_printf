/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:15:12 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/17 15:15:13 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(long int n)
{
	int			count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	long_n;
	char		*str;
	int			len;

	long_n = n;
	len = count_digits(long_n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (long_n < 0)
	{
		str[0] = '-';
		long_n = -long_n;
	}
	if (long_n == 0)
		str[0] = '0';
	while (long_n > 0)
	{
		str[len - 1] = (long_n % 10) + '0';
		long_n = long_n / 10;
		len--;
	}
	return (str);
}
