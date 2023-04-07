#include "main.h"
/**
 * _strlen_recursion - function for the length
 * of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * palindrome_checker - checks for palindrome
 * @s: string
 * @i: left index
 * @j: right index
 * Return: 1 || 0.
 */
int palindrome_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (palindrome_checker(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checking for palindrome
 * @s: string
 * Return: 1 || 0.
 */
int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, _strlen_recurion(s) - 1));
