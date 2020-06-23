#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: integer
 *@size: integer
 *
 */
void print_diagsums(int *a, int size)
{
	int ini, dia1 = 0, dia2 = 0;

	for (ini = 0; ini < size * size; ini += (size + 1))
		dia1 += a[ini];
	for (ini = size - 1; ini < (size * size) - (size - 1); ini += (size - 1))
		dia2 += a[ini];
	printf("%d, %d\n", dia1, dia2);
}
