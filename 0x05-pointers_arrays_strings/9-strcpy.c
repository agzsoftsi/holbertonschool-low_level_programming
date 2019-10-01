#include "holberton.h"
/**
 *_strcpy - copy the string to by src
 *@dest: destination
 *@src: source
 *Return: destination
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
