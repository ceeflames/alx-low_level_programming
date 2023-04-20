#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: char pointer to name
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
