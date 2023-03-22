#include "main.h"

/**
 * print_sign - function that prints sign of a number
 *
 * @n: check integer
 * Return: 1 if n is greater than zero, -1 if less than zero, else 0
 */

int print_sign(int n);
{
	int n;

	if (n > 0)
		_putchar('+');
	return (1);

	else if (n < 0)
		_putchar('-');
	return (-1);

	else
		_putchar('0');

	return (0);
}

