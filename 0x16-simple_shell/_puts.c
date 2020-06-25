#include "shell.h"

/**
 * _puts     -  print a string
 * @str : pointer to char
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;


	}
		_putchar('\n');

}
