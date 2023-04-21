#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints number
 * @separator: string to be printed between numbers
 * @n: number of integer passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(p);
}
