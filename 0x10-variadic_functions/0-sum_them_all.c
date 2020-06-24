#include "variadic_functions.h"
/**
 *sum_them_all - sum of all its parameters
 *@n: unsigned int
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int con, sum = 0;
	va_list ar;

	if (n == 0)
		return (0);

	va_start(ar, n);
	for (con = 0; con < n; con++)
		sum += va_arg(ar, int);
	va_end(ar);
	return (sum);
}
