/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:38:53 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/21 04:38:13 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int	ft_char_in_set(const char c, const char *set);
int	ft_printf(const char *, ...);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n, char specifier);
int	ft_putnbr(int n);
int	ft_putptr(void *n);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);

#endif // LIBFTPRINTF_H
