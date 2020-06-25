#include "monty.h"

/**
 * _verify1 - verify function
 * @num: number
 * Return: always 0
 */
int _verify1(char *num)
{
	int temp = 0;

	if (!num)
		return (1);

	if (num[temp] == 45)
		temp++;
	while (num[temp])
	{
		if (num[temp] < 48 || num[temp] > 57)
			return (-1);
		temp++;
	}
	return (0);
}
