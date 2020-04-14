#include "search_algos.h"

/**
 * linear_search - Search for the value in an array
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int con;

	if (!array)
		return (-1);

	for (con = 0; con < size; con++)
	{
		printf("Value checked array[%d] = [%d]\n", con, array[con]);
		if (array[con] == value)
			return (con);
	}

	return (-1);
}
