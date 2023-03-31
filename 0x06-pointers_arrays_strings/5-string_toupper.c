#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - change all lowercase letters of a string to uppercase.
 * @s: lenght of strings
 * Return: s.
 */
 char *string_toupper(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= 97 && s[len] <= 122)
		{
			s[len] = s[len] - 32;
		}
		len++;
	}
	return (s);
}
