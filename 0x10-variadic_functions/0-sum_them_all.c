#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: unsigned int
 *
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int j;
	va_list p;

	va_start(p, n);

	if (n == 0)
		return (0);

	for (j = 0; j < n; j++)
		sum = sum + va_arg(p, int);

	va_end(p);

	return (sum);
}
