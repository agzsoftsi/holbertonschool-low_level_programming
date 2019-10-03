#include <stdio.h>
#include "holberton.h"

/**
 * rot13 - rot13 encoding
 * @s: string
 *
 * Return: string with rot13;
 */

char *rot13(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
if (s[i] >= 65 && s[i] <= 77)
{
s[i] = s[i] + 13;
}
else if (s[i] >= 78 && s[i] <= 90)
{
s[i] = s[i] - 13;
}
else if (s[i] >= 97 && s[i] <= 109)
{
s[i] = s[i] + 13;
}
else if (s[i] >= 98 && s[i] <= 122)
{
s[i] = s[i] - 13;
}
i++;
}
return (s);
}
