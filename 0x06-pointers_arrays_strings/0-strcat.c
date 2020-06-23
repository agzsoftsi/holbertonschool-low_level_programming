#include "holberton.h"
/**
 *char *_strcat - concatenates two strings
 *@dest: Destination of the new string
 *@src: Source of the string
 *Return: Return dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	return (dest);
}
