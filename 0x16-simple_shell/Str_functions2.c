#include "shell.h"
/**
 *_strlen - return the length of a string
 *@s: character
 *Return: length os string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 *_strncmp - return the length of a string
 *@s1: string 1 to comparate
 *@s2: string 2 to comparate
 *@n: number of characters to comparate
 *Return: 0 is success o -1 is fail
 */

int _strncmp(char *s1, char *s2, int n)
{

	int i = 0;

	do {
		if (s1[i] != s2[i])
			return (-1);

		i++;

	} while (i != n);

	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
