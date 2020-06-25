#include "shell.h"
/**
 * reverse - function that reverse a string
 * @str: string to reverse
 * @len: len of string
 * Return: int number of characters
 * On error, return 0
 */

void reverse(char *str, int len)
{
	int i = 0, j = len - 1, temp;


	if (str[i] == '-')
		i++;

		while (i < j)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
			i++;
			j--;
		}
}

/**
 * intToStr - function that convert a int to string
 * @x: integer to convert to string
 * @str: array that containt string result
 * Return: length string result
 * On error, return 0
 */
int intToStr(int x, char str[])
{
	int i = 0;

		if (x == INT_MIN)
		{
			str[0] = '-';
			str[1] = '2';
			str[2] = '1';
			str[3] = '4';
			str[4] = '7';
			str[5] = '4';
			str[6] = '8';
			str[7] = '3';
			str[8] = '6';
			str[9] = '4';
			str[10] = '8';
			str[11] = '\0';
		return (11);
		}
		if (x < 0)
		{
			x = abs(x);
			str[i] = '-';
			i++;
		}
		while (x)
		{
			str[i++] = (x % 10) + '0';
			x = x / 10;
		}
	reverse(str, i);
	str[i] = '\0';
	return (i);
}
