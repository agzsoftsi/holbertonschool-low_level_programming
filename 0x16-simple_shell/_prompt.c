#include "shell.h"
/**
 * _prompt- print the prompt of shell
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
void _prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('[');
		_putchar('C');
		_putchar('I');
		_putchar('S');
		_putchar('H');
		_putchar('E');
		_putchar('L');
		_putchar('L');
		_putchar('$');
		_putchar(']');
	}
}
