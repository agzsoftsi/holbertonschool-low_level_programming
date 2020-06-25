#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: integer array
 * @size: size_t
 */
void quick_sort(int *array, size_t size)
{
	int limt  = size - 1;

	if (size < 2)
		return;

	partition(array, size, 0, limt);
}

/**
 * partition - quick sort recursive
 * @arr: array
 * @size: size of array
 * @lower_limt: lower limit
 * @limt: upper limit
 */
void partition(int *arr, size_t size, int lower_limt, int limt)
{
	int pivot;

	if (lower_limt < limt)
	{
		pivot = sort(arr, size, lower_limt,  limt);
		partition(arr, size, lower_limt, pivot - 1);
		partition(arr, size, pivot + 1, limt);
	}
}

/**
 * sort - sorts an array according to quick sort algo
 * @arr: array
 * @lower_limt: lower limit
 * @limt: upper limit
 * @size: size of array
 * Return: swap_index
 */
int sort(int *arr, size_t size, int lower_limt, int limt)
{
	int pivot = arr[limt], swap_index = lower_limt, i;

	for (i = lower_limt; i < limt; i++)
		if (arr[i] < pivot)
		{
			if (i != swap_index && arr[i] != arr[swap_index])
				swap(&arr[i], &arr[swap_index], size, arr);

			swap_index++;
		}

	if (limt != swap_index && arr[limt] != arr[swap_index])
		swap(&arr[limt], &arr[swap_index], size, arr);

	return (swap_index);
}

/**
 * swap - swaps two elements in an array.
 * @val1: first int to be swapped.
 * @val2: second element to be swapped.
 * @arr: array.
 * @size: size of array.
 * Return: nothing.
 */
void swap(int *val1, int *val2, size_t size, int *arr)
{
	int tmp;

	tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;

	print_array(arr, size);
}
