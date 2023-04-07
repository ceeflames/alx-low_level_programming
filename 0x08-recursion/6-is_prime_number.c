#include "main.h"
/**
 * test - checking if n is prime number
 * @b: integer
 * @a: integer
 * Return: test
 */
int test(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (test(a + 1, b));
	}
}

/**
 * is_prime_number - function for prime number
 * @n: number
 * Return: 1.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (test(2, n));
}
