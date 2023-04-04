#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in string
 * @s: constant
 * @c: character
 * Return: NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		s++;
		}
	}
	return (NULL);
}
