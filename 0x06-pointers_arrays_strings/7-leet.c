#include "main.h"
/**
 * leet - encode strings to 1337
 * @a: char
 * Return: a
 */
char *leet(char *a)
{
	int r[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int w[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == r[j])
			{
				a[i] = w[j / 2];
			}
		}
	}
	return (a);
}
