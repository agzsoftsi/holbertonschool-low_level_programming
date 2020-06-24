#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: integer mininum
 * @max: integer maximum
 * Return: creates an array of elements
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *lon;
	int con1, con2;

	if (min > max)
		return (NULL);

	lon = malloc(sizeof(int) * (max - min + 1));
	if (lon == NULL)
		return (NULL);

	for (con1 = min, con2 = 0; con1 <= max; con1++, con2++)
		lon[con2] = con1;
	return (lon);
}
