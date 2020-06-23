#include "holberton.h"
/**
 *reverse_array - reverse an array
 *@a: array
 *@n: integer
 */
void reverse_array(int *a, int n)
{
	int i, temp = 0;

	n = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
