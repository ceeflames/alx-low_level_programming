#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: number of bytes in the initial segment
 * @accept: consist only of bytes
 *
 * Return: z.
 */
unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 31)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}


		}
		else
			return (z);
	}
	return (z);
}
