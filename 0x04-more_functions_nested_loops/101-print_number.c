#include "holberton.h"
/**
 *print_number - print numbers
 *@n: takes in an integer
 */
void print_number(int n)
{
	unsigned int n1, n2, con, val = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	n1 = n;
	n2 = n1;
	if (n1 > 9)
	{
		while (n1 >= 10)
		{
			val = val * 10;
			n1 = n1 / 10;
		}
		_putchar((n2 / val) + '0');
		val = val / 10;

		for (con = val; con >= 1; con = con / 10)
			_putchar((n2 / con) % 10 + '0');
	}
	else
		_putchar(n1 + '0');
}
