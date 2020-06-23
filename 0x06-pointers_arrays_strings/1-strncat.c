#include "holberton.h"
/**
 *_strncat - concat two strings
 *@dest: destination of string
 *@src: source of string
 *@n: max bytes of src
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}
