#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers fron 0 to 14
 *
 */
void more_numbers(void)
{
int c;
int t;
for (t = 0; t < 10; t++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
_putchar (c / 10 + '0');
_putchar (c % 10 + '0');
}
_putchar ('\n');
}
}
