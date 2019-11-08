#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
int bin, con;
int zero = 0; /* flag to make sure leading 0s are not printed */
int size; /* size in bits of n, minus 1 for +/- bit */

if (n == 0)
{
_putchar('0');
return;
}

size = sizeof(n) * 8 - 1;
for (con = size; con >= 0; con--)
{
bin = n >> con;
if (bin & 1)
{
_putchar('1');
zero = 1;
}
else if (zero == 1)
putchar('0');
}
}
