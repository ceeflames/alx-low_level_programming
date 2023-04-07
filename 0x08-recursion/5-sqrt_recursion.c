#include "main.h"
/**
 * test - function to check the square root
 * @a: integer
 * @b: integer
 * Return: test.
 */
int test(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (test(a + 1, b));
}

/**
 * _sqrt_recursion - function for square root
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (test(1, n));
}
