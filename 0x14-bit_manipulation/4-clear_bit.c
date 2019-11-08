#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: takes in a pointer to a number
 * @index: the index of the bit you want
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int setnum = 1;

setnum <<= index;
if (index > sizeof(unsigned long int) * 8)
return (-1);
(*n) = (*n) & ~(setnum);
return (1);
}
