#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: compare values
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int val = 0;

	if (array && size && cmp)
		while (val < size)
		{
			if (cmp(array[val]))
				return (val);
			val++;
		}
	return (-1);
}
