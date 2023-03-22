#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @n: int
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		_putchar(last_digit + '0');

	return (last_digit);
}


