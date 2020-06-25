#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: The array of integers
 * @size: The number of elements
 */
void selection_sort(int *array, size_t size)
{
	unsigned int con1, con2;
	int curr_min, temp;

	if (!array)
		return;

	for (con1 = 0; con1 < size - 1; con1++)
	{
		curr_min = con1;
		for (con2 = con1 + 1; con2 < size; con2++)
		{
			if (array[con2] < array[curr_min])
				curr_min = con2;
		}

		if (array[con1] != array[curr_min])
		{
			temp = array[con1];
			array[con1] = array[curr_min];
			array[curr_min] = temp;
			print_array(array, size);
		}
	}
}
