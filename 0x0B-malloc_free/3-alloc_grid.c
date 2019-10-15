#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers
 * NULL on failure, If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
int con1, con2;
int **array;
if (height <= 0 || width <= 0)
return (NULL);

array = malloc(sizeof(int *) * height);
if (array == 0)
return (NULL);

for (con1 = 0; con1 < height; con1++)
{
array[con1] = malloc(sizeof(int) * width);
if (array[con1] == 0)
{
free(array);
for (con2 = 0; con2 <= con1; con2++)
free(array[con2]);

return (NULL);
}

for (con2 = 0; con2 < width; con2++)
array[con1][con2] = 0;
}

return (array);
}
