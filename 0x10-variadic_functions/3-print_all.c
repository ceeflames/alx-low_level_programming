#include "variadic_functions.h"

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
	printf("%f", va_arg(p, double));
}
/**
 * print_string -func to print str
 * @p: va list type
 */
void print_string(va_list p)
{
	char *c;

	c = va_arg(p, char *);
	if (c == NULL)
		c = "(nil)";
		printf("%s", c);
}
/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
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
	while (format && format[i])
	{
		j = 0;
		while (forms[j].formats)
		{
			if (format[i] == *(forms[j].formats))
			{
				printf(", ");
				forms[j].f(p);
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(p);
}
