/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:59:38 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/21 05:40:52 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_dispatch(char specifier, va_list *args)
{
	void *pointer;
	
	if (specifier == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (specifier == 'p')
	{
		pointer = va_arg(*args, void *);
		if (!pointer)
			return (ft_putstr("(nil)"));
		ft_putstr("0x");
		return (2 + ft_putptr(pointer));
	}
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	if (specifier == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	if (specifier == 'x' || specifier == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), specifier));
	if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0'
			&& ft_char_in_set(format[i + 1], "cspdiuxX%"))
		{
			count += ft_format_dispatch(format[i + 1], &args);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
