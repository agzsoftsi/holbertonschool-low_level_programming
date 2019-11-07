#include "holberton.h"
/**
 * binary_to_uint - function that converts binary to unsigned int
 * @b: takes in a conts char string
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int con = 0, dec = 0;

if (b == NULL)
return (0);

while (b[con] != '\0')
{
if (b[con] != '0' && b[con] != '1')
return (0);

dec <<= 1;

if (b[con] == '1')
dec ^= 1;
con++;
}

return (dec);
}
