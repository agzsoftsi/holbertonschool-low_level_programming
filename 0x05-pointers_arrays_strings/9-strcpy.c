#include "holberton.h"
/**
 * _strcpy - copies a string
 * @dest: destionation string
 * @src: source string
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
int i, c;

for (c = 0; src[c] != '\0'; c++)
;

for (i = 0; i < c; i++)
dest[i] = src[i];
return (dest);
}
