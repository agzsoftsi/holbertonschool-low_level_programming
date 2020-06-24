#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change money
 * @argc: count
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coin;
	int can;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	can = 0;
	while (coin > 0)
	{
		if (coin >= 25)
		{
			coin -= 25;
			can += 1;
		}
		else if (coin >= 10)
		{
			coin -= 10;
			can += 1;
		}
		else if (coin >= 5)
		{
			coin -= 5;
			can += 1;
		}
		else if (coin >= 2)
		{
			coin -= 2;
			can += 1;
		}
		else
		{
			coin -= 1;
			can += 1;
		}
	}
	printf("%d\n", can);
	return (0);
}
