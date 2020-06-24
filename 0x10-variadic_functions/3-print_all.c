#include "variadic_functions.h"

/**
 * print_all - Print characters, integers, floats, and strings
 * @format: List of types of arguments passed to the function
 * (c for character, i for integer, f for float, s for char *)
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	unsigned int print, con = 0;
	char *s;

	while (format)
	{
		va_start(ar, format);
		while (format[con])
		{
			print = 1;
			switch (format[con])
			{
				case 'c':
					printf("%c", va_arg(ar, int));
					break;
				case 'i':
					printf("%d", va_arg(ar, int));
					break;
				case 'f':
					printf("%f", va_arg(ar, double));
					break;
				case 's':
					s = va_arg(ar, char *);
					if (!s)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					print = 0;
					break;
			}
			if (format[con + 1] && print)
				printf(", ");
			con++;
		}
		va_end(ar);
		break;
	}
	printf("\n");
}
