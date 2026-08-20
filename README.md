*This project has been created as part of the 42 curriculum by ferde-so.*

# ft_printf

## Description

`ft_printf` is a custom implementation of C's `printf` function of the `libc` library in `stdio.h` header.

The main goal of this project is to learn how to use functions with a variable number of arguments (variadic functions) using the quartet: `va_start`, `va_arg`, `va_copy`, and `va_end`.

## Instructions

After cloning or downloading the repository, compile and use the library like this:

1. Open a terminal in the `ft_printf` directory.
2. Run `make` to build the library archive `libftprintf.a`.
3. Link `libftprintf.a` with your own C programs by adding `-L . -lft` to the compilation command.

`-L /path/` : Directs the linker where to search for your custom binary libraries.

`-l[name]` : Links a specific library (e.g., `-lfoo` looks for `libfoo.a` or `libfoo.so`).

Example:

```sh
make
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o my_program
```

or, simply:

```sh
make
cc -Wall -Wextra -Werror main.c libftprintf.a -o my_program
```

To clean build files:

```sh
make clean
```

To remove compiled objects and the library:

```sh
make fclean
```

To rebuild everything from scratch:

```sh
make re
```

## Resources

References used during development:
- C standard library documentation (`man printf`).
- The 42 Network project pdf's.
- Online C learning resources such as `w3schools.com`, `geeksforgeeks.org`, `stackoverflow.com`, etc.
 - Github for automatic testers (`printfTester`).

AI usage:
- AI assistance was used in many instances, from discussion of topics, errors, ideas, problems, and improvements, to explanations, research, tests, and to help draft and write the README content.

- But mostly to search for learning resources and to explain problems in the code (e.g., "Why doesn't it work?", "What is the difference between x, y, and z?", etc.).

## Description of the library 

The structure is a simple read character by character of the string given, printing characters and testing for the many conditions for special printing when finding a `%` character and the following character being in the set `cspdiuxX%` or not:

- `%c` — prints a single character.
- `%s` — prints a string (as defined by the common C convention).
- `%p` — the void * pointer argument is printed in hexadecimal format.
- `%d` — prints a decimal (base 10) number.
- `%i` — prints an integer in base 10.
- `%u` — prints an unsigned decimal (base 10) number.
- `%x` — prints a number in hexadecimal (base 16) lowercase format.
- `%X` — prints a number in hexadecimal (base 16) uppercase format.
- `%%` — prints a percent sign.

This is done using these functions:

- `ft_char_in_set` — checks if a character is in a set of characters.
- `ft_printf` — the main function created to call the others. Returns the sum of the printed characters.
- `ft_putchar` — writes a character to the standard output and returns 1.
- `ft_puthex` — writes a hexadecimal number to the standard output and returns its length.
- `ft_putnbr` — writes an integer number to the standard output and returns its length.
- `ft_putptr` — writes a hexadecimal pointer number to the standard output and returns its length.
- `ft_putstr` — writes a string to the standard output and returns its length.
- `ft_putunbr` — writes an unsigned integer number to the standard output and returns its length.

## main for testing

```sh
#include <stdio.h>
#include "ft_printf.h"

int main (void)
{
	int returned = 0;
	int returned_ft = 0;

	int number = 1000;
	char character1 = 'A';
	char character2 = ' ';
	char *string = "Hello, World!";
	void *pointer1 = &number;
	void *pointer2 = 0;
	void *pointer3 = (void *)-1;
	unsigned int unsigned_number = 4294967295;
	int hex_number1 = 305441741;
	unsigned int hex_number2 = 305481741;

	returned = printf("0 %c 1 %s 2 %p A %d B %i C %u D %x E %X F %%.\n", character1, string, pointer1, number, number, unsigned_number, hex_number1, hex_number2);
	printf("   returned: %d\n", returned);
	returned_ft = ft_printf("0 %c 1 %s 2 %p A %d B %i C %u D %x E %X F %%.\n", character1, string, pointer1, number, number, unsigned_number, hex_number1, hex_number2);
	printf("returned_ft: %d\n", returned_ft);

	returned = printf("0 %c 1 %s 2 %p A %d B %i C %u D %x E %X F %%.\n", character2, string, pointer2, -500000, -500000, -1, -50, -50);
	printf("   returned: %d\n", returned);
	returned_ft = ft_printf("0 %c 1 %s 2 %p A %d B %i C %u D %x E %X F %%.\n", character2, string, pointer2, -500000, -500000, -1, -50, -50);
	printf("returned_ft: %d\n", returned_ft);

	returned = printf("0 %c 1 %s 2 %p A %d B %i C %u D %x E %X F %%.\n", character2, string, pointer3, -500000, -500000, -1, -50, -50);
	printf("   returned: %d\n", returned);
	returned_ft = ft_printf("0 %c 1 %s 2 %p A %d B %i C %u D %x E %X F %%.\n", character2, string, pointer3, -500000, -500000, -1, -50, -50);
	printf("returned_ft: %d\n", returned_ft);

	return (0);
}
```
