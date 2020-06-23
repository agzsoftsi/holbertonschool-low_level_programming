#include "holberton.h"
/**
 *_memset - fills memory with a constant byte
 *@s: char
 *@b: char
 *@n: integer
 *Return: return a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int count;
for (count = 0; count < n; count++)
s[count] = b;
return (s);
}
