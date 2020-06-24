#include <stdio.h>
/**
 * main - point
 * @argc: argcon
 * @argv: argval
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int val;

	if (argc)
	{
		for (val = 0; val < argc; val++)
		{
			printf("%s\n", argv[val]);
		}
	}
	return (0);
}
