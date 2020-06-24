#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * struct cformat - Short description
 * @print: argument to print
 * @p: Pointer
 *
 * Description: Basic structure of format
 * -------------------------------------------------------------
 * Source File: holberton.h - header file
 * -------------------------------------------------------------
 * This file contains the prototypes, structures and libraries
 * -------------------------------------------------------------
 * Authors - Carlos Garcia - Orlando Gomez - Cohort 10 - Cali
 * Project Date - 25/10/2019 - 29/10/2019
 * -------------------------------------------------------------
 */

typedef struct cformat
{
char *print;
int (*p)();
} cf_t;

int _printf(const char *format, ...);
int _putchar(char c);
int pc(va_list arg);
int ps(va_list arg);
int pd(va_list arg);
int pi(va_list arg);

#endif
