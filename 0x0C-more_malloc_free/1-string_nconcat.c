#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *Return: returned pointer shall point to a newly allocated space in memory,
 *which contains s1, followed by the first  *n bytes of s2, and null terminated
 *If the function fails, it should return NULL
 *If n is greater or equal to the length of s2 then use the entire string s2
 *if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int con, lon1, lon2;
char *constr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

lon1 = _strl(s1);
lon2 = _strl(s2);

if (n > lon2)
n = lon2;

constr = malloc(sizeof(char) * (lon1 + n + 1));
if (constr == NULL)
return (NULL);

for (con = 0; con < lon1; con++)
constr[con] = s1[con];

for (; con < lon1 + n; con++)
constr[con] = s2[con - lon1];

constr[lon1 + n] = '\0';
return (constr);
}


/**
 * _strl - Return length of string
 * @s: string
 * Return: length of the string
 */

int _strl(char *s)
{
int con;
for (con = 0; s[con] != '\0'; con++)
;
return (con);
}
