#include "ft_printf.h"

int	ft_puthex(unsigned int n, char specifier)
{
	char			c;
	int				count;
	const char		*set;

	if (specifier == 'X')
		set = "0123456789ABCDEF";
	else
		set = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_puthex(n / 16, specifier);
	}
	c = set[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}
