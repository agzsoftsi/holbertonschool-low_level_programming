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

int con1, con2, acum1 = 0, acum2 = 0;
for (con1 = 0; con1 < size * size; con1 + (size + con1))
{
acum1 += a[con1];
}
for (con2 = size - 1; con2 < size * size - (size - 1); con2 += (size - 1))
{
acum2 += a[con2];
}
printf("%d, %d\n", acum1, acum2);
}
