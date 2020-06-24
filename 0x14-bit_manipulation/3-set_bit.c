#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: takes in a pointer to a number
 * @index: the index of the bit you want
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setnum = 1;

	setnum <<= index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	(*n) = (*n) | setnum;
	return (1);
}
