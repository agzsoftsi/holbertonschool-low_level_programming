#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: Array of integers
 * @size: Number of elements
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int con;
	int swap, temp;

	if (!array)
		return;

	do {
		swap = 0;
		for (con = 0; con < size - 1; con++)
		{
			if (array[con] > array[con + 1])
			{
				temp = array[con + 1];
				array[con + 1] = array[con];
				array[con] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
	} while (swap);
}
