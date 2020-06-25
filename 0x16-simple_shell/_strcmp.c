#include "shell.h"

/**
 * _strcmp   - function that concatenate n chars of src to dest
 * @s1	 : string dest
 * @s2   : string origin
 * Return:  integer
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);

		}
	i++;

	}

	return (0); /* if alls char are equals */
}
