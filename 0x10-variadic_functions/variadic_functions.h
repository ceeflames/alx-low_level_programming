#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list p);
void print_int(va_list p);
void print_float(va_list p);
void print_string(va_list p);

typedef struct form_t
{
	char *formats;
	void (*f)(va_list p);
} form;
#endif
