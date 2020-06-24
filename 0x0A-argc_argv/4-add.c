#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds adds positive numbers
 * @argc: count
 * @argv: array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int can1, can2, numbers;

	for (can1 = 1; can1 < argc; can1++)
	{
		for (can2 = 0; argv[can1][can2] != '\0'; can2++)
		{
			if (!isdigit(argv[can1][can2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		numbers = numbers + atoi(argv[can1]);
	}
	printf("%i\n", numbers);
	return (0);
}
