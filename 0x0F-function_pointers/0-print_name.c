#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: char pointer to name
 * @f: pointer to a function
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
