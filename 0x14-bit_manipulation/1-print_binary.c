#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int con;
	int val = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		for (con = 1UL << 63; con > 0; con >>= 1)
		{
			if (n & con)
			{
				_putchar('1');
				val = 1;
			}
			else if (val)
				_putchar('0');
		}
	}
}
