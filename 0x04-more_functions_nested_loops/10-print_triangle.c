#include "holberton.h"
/**
 *print_triangle - print a triangule
 *@size: integer
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
				_putchar (' ');
			else
				_putchar ('#');
		}
		_putchar('\n');
	}
}
