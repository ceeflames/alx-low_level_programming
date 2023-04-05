#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: pointer
 *
 * Return: 0.
 */
void _puts_recursion(char *s)
{
	if (*s == "")
	{
		return (0);
	}
	printf("%s\n", s);
}
