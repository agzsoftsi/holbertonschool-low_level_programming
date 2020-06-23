#include "holberton.h"
/**
 *_memcpy - copies memory area
 *@dest: destination
 *@src: source
 *@n: integer
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
