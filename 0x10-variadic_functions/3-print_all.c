#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char -func to print char
 * @p: va list type
 */
void print_char(va_list p)
{
	printf("%c", va_arg(p, int));
}

/**
 * print_int -func to print in
 * @p: va list type
 */
void print_int(va_list p)
{
	printf("%d", va_arg(p, int));
}

/**
 * print_float -func to print float
 * @p: va list type
 */
void print_float(va_list p)
{
	printf("f", va_arg(p, double));
}
/**
 * print_string -func to print str
 * @p: va list type
 */
void print_string(va_list p)
{
	printf("%s",va_arg(p, int));
}
/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, j;
	va_list p;
	
	form forms[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(p, format);
	while (format != NULL && format[i] != NULL)
	{
		if (forms[i].formats[0] == format[i])
		{
			forms[j].f(p);
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
