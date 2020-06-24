#include "function_pointers.h"
/**
 * array_iterator - maps an array through a func pointer
 * @array: array
 * @size: size
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *final = array + size - 1;

	if (array && size && action)
	{
		while (array <= final)
			action(*array++);
	}
}
