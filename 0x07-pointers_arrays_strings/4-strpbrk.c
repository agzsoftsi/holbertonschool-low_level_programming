#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string
 *@accept: string
 *Return: pointer to the byte in s that matches one of the bytes in
 *accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int con1, con2;
for (con1 = 0; s[con1] != '\0'; con1++)
{
for (con2 = 0; accept[con2] != '\0'; con2++)
{
if (s[con1] == accept[con2])
return (s + con1);
}
}
return (0);
}
