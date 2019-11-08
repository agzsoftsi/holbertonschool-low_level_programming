#include "holberton.h"
/**
 * get_bit - returns the value of of a bit at a given index
 * @n: takes in a number
 * @index: index of the given bit
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);

if ((n >> index) & 1)
return (1);
else
return (0);
return (index);
}
