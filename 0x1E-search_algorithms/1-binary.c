#include "search_algos.h"

/**
 * binary_search - Search for the value in a sorted arrays
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int con = 0;
	unsigned int j = size - 1;
	unsigned int curr;

	if (!array)
		return (-1);

	while (con <= j)
	{
		print_array(array, con, j);
		curr = (con + j) / 2;
		if (array[curr] == value)
			return (curr);
		else if (array[curr] > value)
			j = curr - 1;
		else if (array[curr] < value)
			con = curr + 1;
	}

	return (-1);
}

/**
 * print_array - Print array between two indexes
 * @array: The array to print
 * @start: The starting index
 * @end: The ending index
 */
void print_array(int *array, unsigned int start, unsigned int end)
{
	unsigned int con;

	printf("Searching in array: ");
	for (con = start; con < end; con++)
		printf("%d, ", array[con]);
	printf("%d\n", array[con]);
}
