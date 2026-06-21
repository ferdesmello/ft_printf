#include "ft_printf.h"

int	ft_puthex(int n, char format)
{
	unsigned int	long_n;
	char			c;
	int				count;
	const char		*set;

	if (format == 'X')
		set = "0123456789ABCDEF";
	else
		set = "0123456789abcdef";
	long_n = n;
	count = 0;
	if (long_n >= 16)
	{
		count += ft_puthex(long_n / 16, format);
	}
	c = set[long_n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}
