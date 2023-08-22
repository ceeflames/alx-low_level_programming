#include "main.h"

/**
 * _atoi - converts a string to an intger
 * @s: integer
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int ni = 0;
	int min = 1;
	int b = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			b = 1;
			ni = (ni * 10) + (s[a] - '0');
			a++;
		}

		if (b == 1)
		{
			break;
		}

		a++;
	}

	ni *= min;
	return (ni);
}
