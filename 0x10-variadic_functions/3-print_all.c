#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i;
	va_list p;

	va_start(p, format);
	



	printf("\n");
	va_end(p);
}
