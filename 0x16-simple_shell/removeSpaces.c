#include "shell.h"
/**
 * removeSpaces- remove spaces of a string
 * @str:  string to remove spaces
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/

void removeSpaces(char *str)
{
	size_t str_len = _strlen(str);
	char result[512];
	size_t p = 0;
	size_t i = 0;

	for (i = 0; i < str_len; ++i)
	{
		if (str[i] != ' ')
		{
			result[p] = str[i];
			p++;
		}
	}
	if (p < str_len)
		str[p] = '\0';

	for (i = 0; i < p; ++i)
	{
		str[i] = result[i];
	}
}

