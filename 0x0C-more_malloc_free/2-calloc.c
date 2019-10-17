#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory from an array using malloc
 * @nmemb: integer
 * @size: integer
 * Return: pointer to the allocated memory of NUll if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;

if (nmemb == 0 || size == 0)
return (NULL);
array = malloc(nmemb * size);
if (array == 0)
return (NULL);

_memset(array, 0, nmemb * size);
return (array);
}

/**
 * _memset - Fill constant byte
 * @mem: memory area to fill
 * @cons: constant byte
 * @num: number of bytes to fill
 * Return: Pointer to the memory area s
 */
char *_memset(char *mem, char cons, unsigned int num)
{
unsigned int con;
for (con = 0; con < num; con++)
mem[con] = cons;
return (mem);
}
