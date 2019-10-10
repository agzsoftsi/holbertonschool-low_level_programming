#include "holberton.h"
int is_palindrome(char *s);
int rec_longstring(char *s);
int revstring(char *s, int lon);
/**
 *is_palindrome - palindrom
 *@s: string
 *Return: value
 */
int is_palindrome(char *s)
{
int lonstr;
lonstr = rec_longstring(s);
if (lonstr <= 1)
return (0);
return (revstring(s, lonstr));
}
/**
 *revstring - checks the string
 *@s: string
 *@lon: long of string
 *Return: value
 */
int revstring(char *s, int lon)
{
if (lon <= 1)
return (1);
if (*s != s[lon - 1])
return (0);
else
return (revstring(s + 1, lon - 2));
}

/**
 *rec_longstring - reviwe long of string
 *@s: string
 *Return: value
 */
int rec_longstring(char *s)
{
if (*s == '\0')
return (0);
return (1 + rec_longstring(s + 1));
}
