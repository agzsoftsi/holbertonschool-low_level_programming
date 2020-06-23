#include"holberton.h"
/**
 *print_rev - print in reverse a string
 *@s:takes a string of characters
 */
void print_rev(char *s)
{
	int i = 0, c;

	while (s[c] != '\0')
		c++;
	c--;
	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
