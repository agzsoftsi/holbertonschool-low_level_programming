0x10. C - printf
Carlos Garcia - Orlando Gomez
Cohort 10
Cali - Colombia

.

_printf

A function that produces output according to a format

Prototype: int _printf(const char *format, ...);

Handles the following conversion specifiers:

c - character
s - string
d - decimal
i - integer
% - percentage sign

.

Proyect Files

holberton.h : defines prototypes and structs and libraries
_putchar.c: writes single character to stdout
_printf.c - definition for _printf which produces output according to a format
_printf_char.c : _putchar single character
_printf_str.c : _putchar string
_printf_dec.c: _putchar decimal
_printf_int.c: _putchar integer

.

Usage

Character: _printf("%c\n", "H")

Output: H

.

String: _printf("%s\n", "Hello, Holberton!")

Output: Hello, Holberton!

.

Decimal: _printf("%d\n", "7777")

Output: 7777

.

Integer: _printf("%i\n", "99")

Output: 99



All files were created and compiled on Ubuntu 14.04 LTS using GCC 4.8.4 with the following flags:

-Wall -Werror -Wextra and -pedantic