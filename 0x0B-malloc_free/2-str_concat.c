#include "holberton.h"
#include <stdlib.h>
int _strl(char *s);
/**
 *str_concat - concatenates two strings
 *@s1: string1
 *@s2: string2
 *Return: pointer should point to a newly allocated space in memory
 *which contains the contents of s1, followed by the contents of s2,
 *and null terminated, if NULL is passed, treat it as an empty string
 *The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int con, lon1, lon2;
	char *strcon;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	lon1 = _strl(s1);
	lon2 = _strl(s2);

	strcon = malloc(sizeof(char) * (lon1 + lon2 + 1));
	if (strcon == 0)
		return (NULL);

	for (con = 0; con < lon1; con++)
		strcon[con] = s1[con];

	for (; con < lon1 + lon2; con++)
		strcon[con] = s2[con - lon1];
	strcon[lon1 + lon2] = '\0';

	return (strcon);
}

/**
 * _strl - length of a string
 * @s: string
 * Return: length string
 */
int _strl(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
