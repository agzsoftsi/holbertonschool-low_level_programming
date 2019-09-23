#include "holberton.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
**/
int main(void)
{
char holberton[] = "Holberton";

int c;

for (c = 0; c < 9; c++)
{
_putchar(holberton[c]);
}
_putchar('\n');
return (0);
}
