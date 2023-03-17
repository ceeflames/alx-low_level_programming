#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success0
 */
int main(void)
{
	int n;

	for (n = 0; n++)
		putchar((n % 10) + '0');
	if (n == 9)
		continue;
	putchar(',');
	putchar('\n');

	return (0);
}

