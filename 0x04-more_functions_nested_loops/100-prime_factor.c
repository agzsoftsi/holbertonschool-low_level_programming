#include <stdio.h>
/**
 *main - finds and prints the larges prime factor of the number
 *@void: no arguments
 *Return: zero
 */
int main(void)
{
	long i, num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
