#include <stdio.h>
#include "ft_printf.h"

int main (void)
{
	int returned = 0;
	int returned_ft = 0;
	int number = 1000;
	char character = 'A';

	returned = printf("carro %d bola %c circo\n", number, character);
	printf("returned: %d\n", returned);
	returned_ft = ft_printf("carro %d bola %c circo\n", number, character);
	printf("returned_ft: %d\n", returned_ft);

	return (0);
}
