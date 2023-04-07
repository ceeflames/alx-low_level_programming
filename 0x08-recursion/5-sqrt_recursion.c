#include "main.h"
/**
 * _sqrt_recursion -  function that returns the
 *  natural square root of a number.
 *  @n: integer
 *  Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (test(1, n));

}
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
