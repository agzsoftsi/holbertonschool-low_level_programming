#include "variadic_functions.h"
/**
 *print_numbers - prints numbers
 *@separator: string
 *@n: unsigned interger
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int con;
	va_list ar;

	va_start(ar, n);
	for (con = 0; con < n; con++)
	{
		printf("%d", va_arg(ar, int));
		if (con < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
