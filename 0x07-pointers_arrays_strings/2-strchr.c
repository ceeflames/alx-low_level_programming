#include "main.h"
/**
 * _strchr - function that locates a character in string
 * @s: constant
 * @c: character
 * Return: NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != NULL)

	{
		if (*s == c)
		{
			return (s);
		s++;
		}
	}
	return (NULL);
}
