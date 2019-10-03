#include "holberton.h"
/**
 * rot13 - encodes string to rot13
 * @s: takes in a string
 * Return: s, the string
 */
char *rot13(char *s)
{
int i, j;

char *s1 = "abcdefghijklmABCDEFGHIJKLM";
char *s2 = "nopqrstuvwxyzNOPQRSTUVWXYZ";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; s1[j] != '\0'; j++)
{
if (s[i] == s1[j])
{
s[i] = s2[j];
}
else if (s[i] == s2[j])
{
s[i] = s1[j];
}
}
}
return (s);
}
