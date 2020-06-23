#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - Function that encode with rot13
 *
 * @s: String that will be encoded
 *
 * Return: string that was encoded
 */
char *rot13(char *s)
{
	int i, j;
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a1[j] != '\0'; j++)
		{

			if (s[i] == a1[j])
			{
				s[i] = a2[j];
				break;
			}
		}
	}
	return (s);
}
