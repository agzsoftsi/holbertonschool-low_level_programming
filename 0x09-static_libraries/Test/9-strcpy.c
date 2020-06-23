#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src,
 * @dest: destnation poiter to take value
 * @src: array poited that gets copied
 *
 * Description: copies string pointed to by src,
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
