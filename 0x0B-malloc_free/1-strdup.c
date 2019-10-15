#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: Pointer to the duplicate, NULL if it fails
 */
char *_strdup(char *str)
{
int con1, lon, con2;
char *fundup;

if (str == 0)
return (NULL);

for (con1 = 0; str[con1] != '\0'; con1++)
lon = con1;

fundup = malloc(sizeof(str) * lon + 1);
if (fundup == 0)
return (NULL);

for (con2 = 0; con2 < lon; con2++)
fundup[con2] = str[con2];

fundup[con2] = str[con2];
return (fundup);
}

