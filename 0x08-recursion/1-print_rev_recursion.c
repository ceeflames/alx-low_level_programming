#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: pointer to the string
 * Return: viod.
 */
void _print_rev_recursion(char *s)
{
	int i, n;

	n = 0;

	if (s[n] == "")
	{
		return (0);
	}
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
