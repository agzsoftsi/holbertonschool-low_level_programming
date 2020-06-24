#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: arccon
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int val, res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (val = 1; val < argc; val++)
			res *= atoi(argv[val]);
	}
	printf("%d\n", res);
	return (0);
}
