#include "holberton.h"
/**
 * pc - Prints character c
 * @arg: character to print
 * Return: number of characters printed
 * -------------------------------------------------------------
 * Source File: _printf_char.c - program to print character c
 * -------------------------------------------------------------
 * This file contains the program that prints character c
 * -------------------------------------------------------------
 * Authors - Carlos Garcia - Orlando Gomez - Cohort 10 - Cali
 * Project Date - 25/10/2019 - 29/10/2019
 * -------------------------------------------------------------
 **/
int pc(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
