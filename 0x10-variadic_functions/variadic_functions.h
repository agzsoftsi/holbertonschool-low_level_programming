#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct op - op of type struct
 * @c: char type c
 * @f: function associated
 */
typedef struct op
{
	char *c;
	void (*f)();
} p_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
