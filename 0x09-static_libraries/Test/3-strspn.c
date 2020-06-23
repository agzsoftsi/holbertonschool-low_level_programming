#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: substring
 *Return: numbers of bytes in the inicial segment of s whitch consist
 *only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int count1, count2, count3 = 0;
for (count1 = 0; s[count1] != '\0'; count1++)
{
for (count2 = 0; accept[count2] != '\0'; count2++)
{
if (s[count1] == accept[count2])
{
count3++;
break;
}
}
if (accept[count2] == '\0')
return (count3);
}
return (count3);
}
