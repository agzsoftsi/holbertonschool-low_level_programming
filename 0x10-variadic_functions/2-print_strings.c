#include "variadic_functions.h"
/**
 *print_strings - prints string
 *@separator: string
 *@n: unsigned interger
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int con;
	char *s;
	va_list ar;

	va_start(ar, n);
	for (con = 0; con < n; con++)
	{
		s = va_arg(ar, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (con < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
