#include "holberton.h"
/**
 * _putchar - Print the parameter
 * @c: Character
 * Return: Always 0
 * -------------------------------------------------------------
 * Source File: _putchar.c - Print the character
 * -------------------------------------------------------------
 * This file prints only one character
 * -------------------------------------------------------------
 * Authors - Carlos Garcia - Orlando Gomez - Cohort 10 - Cali
 * Project Date - 25/10/2019 - 29/10/2019
 * -------------------------------------------------------------
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

