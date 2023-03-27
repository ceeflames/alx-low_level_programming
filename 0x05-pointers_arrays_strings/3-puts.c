#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[1]);
	}
	_putchar('\n');
}
