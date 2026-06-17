*This project has been created as part of the 42 curriculum by ferde-so.*

## Description

`libftprintf` is a custom implementation of C's `printf` function.

This repository includes functions for:
- character checks (`ft_isalnum`, `ft_isalpha`, `ft_isascii`, `ft_isdigit`, `ft_isprint`, `ft_tolower`, `ft_toupper`)
- type conversion (`ft_atoi`, `ft_itoa`)
- memory operations (`ft_memchr`, `ft_memcmp`, `ft_memcpy`, `ft_memmove`, `ft_memset`)
- memory cleaning (`ft_bzero`, `ft_calloc`)
- string handling (`ft_split`, `ft_strchr`, `ft_strdup`, `ft_striteri`, `ft_strjoin`, `ft_strlcat`, `ft_strlcpy`, `ft_strlen`, `ft_strmapi`, `ft_strncmp`, `ft_strnstr`, `ft_strrchr`, `ft_strtrim`, `ft_substr`)
- output utilities (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`)
- linked list manipulation (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`)

## Instructions

After cloning or downloading the repository, compile and use the library like this:

1. Open a terminal in the `libftprintf` directory.
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
- C standard library documentation (`man printf`, `man strcpy`, `man malloc`, etc.)
- The 42 Network project pdf's.
- Online C learning resources such as `w3schools.com`, `geeksforgeeks.org`, `stackoverflow.com`, etc.

AI usage:
- AI assistance was used in many instances, from discussion of topics, errors, ideas, problems, and improvements, to explanations, research, tests, and to help draft and write the README content.

- But mostly to search for learning resources and to explain problems in the code (Why it doesn't work?).

## Description of the library 

This library contains both standard C-like functions and custom utilities.

- `ft_atoi` — converts a string to an integer, matching the behavior of `atoi`.
- `ft_bzero` — fills memory with zero bytes, equivalent to `bzero`.
- `ft_calloc` — allocates memory and initializes it to zero, equivalent to `calloc`.
- `ft_isalnum` — checks for alphanumeric characters, like `isalnum`.
- `ft_isalpha` — checks for alphabetic characters, like `isalpha`.
- `ft_isascii` — checks for ASCII character values, like `isascii`.
- `ft_isdigit` — checks for digits, like `isdigit`.
- `ft_isprint` — checks for printable characters, like `isprint`.
- `ft_itoa` — converts an integer to a string; custom utility with no direct libc equivalent.
- `ft_memchr` — searches for a byte in memory, like `memchr`.
- `ft_memcmp` — compares blocks of memory, like `memcmp`.
- `ft_memcpy` — copies memory, like `memcpy`.
- `ft_memmove` — copies memory safely when regions overlap, like `memmove`.
- `ft_memset` — fills memory with a constant byte, like `memset`.
- `ft_putchar_fd` — writes a character to a file descriptor; custom utility.
- `ft_putendl_fd` — writes a string followed by a newline to a file descriptor; custom utility.
- `ft_putnbr_fd` — writes an integer to a file descriptor; custom utility.
- `ft_putstr_fd` — writes a string to a file descriptor; custom utility.
- `ft_split` — splits a string into an array of strings based on a delimiter; custom utility.
- `ft_strchr` — locates a character in a string, like `strchr`.
- `ft_strdup` — duplicates a string, like `strdup`.
- `ft_striteri` — applies a function to each character of a string using its index; custom utility.
- `ft_strjoin` — concatenates two strings into a new allocation; custom utility.
- `ft_strlcat` — concatenates strings with buffer size awareness, like `strlcat`.
- `ft_strlcpy` — copies a string to a buffer with size awareness, like `strlcpy`.
- `ft_strlen` — returns the length of a string, like `strlen`.
- `ft_strmapi` — creates a new string by applying a function to each character; custom utility.
- `ft_strncmp` — compares two strings up to a given length, like `strncmp`.
- `ft_strnstr` — locates a substring in a string with a length limit, like `strnstr`.
- `ft_strrchr` — locates the last occurrence of a character in a string, like `strrchr`.
- `ft_strtrim` — trims specified characters from the start and end of a string; custom utility.
- `ft_substr` — creates a substring from an existing string; custom utility.
- `ft_tolower` — converts a character to lowercase, like `tolower`.
- `ft_toupper` — converts a character to uppercase, like `toupper`.

Linked list utilities:
- `ft_lstnew` — creates a new list node; custom utility.
- `ft_lstadd_front` — adds a node at the beginning of a list; custom utility.
- `ft_lstsize` — returns the number of nodes in a list; custom utility.
- `ft_lstlast` — returns the last node of a list; custom utility.
- `ft_lstadd_back` — adds a node to the end of a list; custom utility.
- `ft_lstdelone` — deletes a single node and frees its content using a provided function; custom utility.
- `ft_lstclear` — clears a whole list and frees all nodes; custom utility.
- `ft_lstiter` — iterates over a list and applies a function to each node; custom utility.
- `ft_lstmap` — creates a new list by applying a function to each node of an existing list; custom utility.
