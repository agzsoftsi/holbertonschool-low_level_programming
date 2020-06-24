#include "holberton.h"
#include <stdio.h>
/**
 * main - entry
 * @argc: string
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int val;

	for (val = 0; val < argc; val++)
		printf("%s\n", argv[val]);
	return (0);
}
