/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:59:38 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/17 17:16:51 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	char c = 'd';
	size_t i;
	const char *set;
	va_list args;

	set = "cspdiuxX%";
    va_start(args, format);
	i = 0;
    while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_char_in_set(format[i+1], set))
		{
			if(c == 'd'){
				printf("%d", va_arg(args, int));
				printf("\n");
				i++;
			}
			if(c == 'c'){
				printf("%c", va_arg(args, int));
				printf("\n");
				i++;
			}
		}
		else
			
		i++;
	}
	va_end(args);
	return (0);
}