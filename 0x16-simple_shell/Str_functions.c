#include "shell.h"

/**
 * _strcpy - copies the string pointed to by src,
 * @dest: destnation poiter to take value
 * @src: array poited that gets copied
 * Description: copies string pointed to by src,
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: string
 *Return: a pointer to the first occurrence of character c in the string s
 *or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
			return (s + count);
	}
	if (s[count] == c)
		return (s + count);
	return (0);
}

/**
 *_strcat - concatenates two strings
 *@dest: Destination of the new string
 *@src: Source of the string
 *Return: Return dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (*(dest + i))
	{
		i++;
	}
	for (j = 0; *(src + j); j++, i++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}

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
		;
	lon = con1;

	fundup = malloc(sizeof(char) * lon + 1);
	if (fundup == 0)
		return (NULL);

	for (con2 = 0; con2 < lon; con2++)
		fundup[con2] = str[con2];
	fundup[lon] = str[lon];

	return (fundup);
}
