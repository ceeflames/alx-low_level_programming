#include <stdio.h>
#include <math.h>

/**
 * main - prime factors
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int i = 612852475143;
	int c;

	for (c = (int) sqrt(i); c > 2; c++)
	{
		if (i % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
	return (0);


}
