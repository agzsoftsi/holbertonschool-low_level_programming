#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 * Return: returns a pointer to the allocated memory, f malloc fails,
 * the malloc_checked function should cause normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *val;
val = malloc(b);

if (val == NULL)
exit(98);
return (val);
}
