/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:59:38 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/21 00:05:15 by ferde-so         ###   ########.fr       */
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
			if(format[i+1] == 'c')
			{
				number = va_arg(args, int);
				count += ft_putchar(number);
				i++;
			}
			if(format[i+1] == 's')
			{
				count += ft_putstr(va_arg(args, char *));
				i++;
			}
			if(format[i+1] == 'p')
			{
				ft_putstr("0x");
				count += 2;
				count += ft_putptr(va_arg(args, void *));
				i++;
			}
			if(format[i+1] == 'd' || format[i+1] == 'i')
			{
				count += ft_putnbr(va_arg(args, int));
				i++;
			}
			if(format[i+1] == 'u'){
				count += ft_putunbr(va_arg(args, unsigned int));
				i++;
			}
			if(format[i+1] == 'x' || format[i+1] == 'X')
			{
				count += ft_puthex(va_arg(args, int), format[i+1]);
				i++;
			}
			if(format[i+1] == '%')
			{
				count += ft_putchar('%');
				i++;
			}
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
