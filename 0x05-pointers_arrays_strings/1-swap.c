#include "holberton.h"
/**
 *swap_int - swap values of two integers
 *@a: integer
 *@b: integer
 */
void swap_int(int *a, int *b)
{
	int dato = *a;

	*a = *b;
	*b = dato;
}
