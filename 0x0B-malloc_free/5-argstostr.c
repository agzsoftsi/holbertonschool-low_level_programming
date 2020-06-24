#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - Concatenate arguments
 * @ac: number arguments
 * @av: vector arguments
 * Return: Returns NULL if ac == 0 or av == NULL
 * or NULL if failure, Returns a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int con1, con2;
	int ini = 0, lon = 0;
	char *strcon;

	if (ac == 0 || av == 0)
		return (NULL);

	for (con1 = 0; con1 < ac; con1++)
		lon += _strl(av[con1]);

	strcon = malloc(sizeof(char) * (lon + ac + 1));
	if (strcon == 0)
		return (NULL);

	for (con1 = 0; con1 < ac; con1++)
	{
		for (con2 = 0; av[con1][con2] != '\0'; con2++)
			strcon[ini++] = av[con1][con2];

		strcon[ini++] = '\n';
	}
	strcon[ini++] = '\0';

	return (strcon);
}

/**
 * _strl - Return the length of a string
 * @s: The string to check
 * Return: The length of the string
 */
int _strl(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
