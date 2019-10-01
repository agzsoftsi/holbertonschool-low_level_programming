#include "holberton.h"
/**
 *_strcpy - copy the string to by src
 *@dest: destination
 *@src: source
 *Return: destination
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *(src + i) != '\0'; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
