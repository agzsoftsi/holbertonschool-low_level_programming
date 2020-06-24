#include "holberton.h"

/**
 * ps - Print array of characters
 * @arg: arguments
 * Return: Number of the length of every element of the array
 * -------------------------------------------------------------
 * Source File: _printf_str.c - program to print string chars
 * -------------------------------------------------------------
 * This file contains the program to print string characters
 * -------------------------------------------------------------
 * Authors - Carlos Garcia - Orlando Gomez - Cohort 10 - Cali
 * Project Date - 25/10/2019 - 29/10/2019
 * -------------------------------------------------------------
 **/

int ps(va_list arg)
{
	int con = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	while (str[con] != '\0')
	{
		_putchar(str[con]);
		con++;
	}
	return (con);
}
