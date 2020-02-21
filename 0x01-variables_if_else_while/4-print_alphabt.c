#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Success)
 **/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
