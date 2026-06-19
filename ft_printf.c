/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:59:38 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/19 06:04:42 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	size_t i;
	const char *set;
	int number;
	int count;

	set = "cspdiuxX%";
    va_start(args, format);
	i = 0;
	count = 0;
    while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_char_in_set(format[i+1], set))
		{
			if(format[i+1] == 'd'){
				count += ft_putnbr_fd(va_arg(args, int), 1);
				i++;
			}
			if(format[i+1] == 'c'){
				number = va_arg(args, int);
				write(1, &number, 1);
				count++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
