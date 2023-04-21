#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: The string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	char *ptr;

	for (i = 0; i < n; i++)
	{
	if (separator != NULL && i < (n - 1))
		printf("%s", separator);

	ptr = va_arg(p, char*);
	if (ptr == NULL)
		printf("(nil)");
	}

	printf("\n");
	va_end(p);
}
