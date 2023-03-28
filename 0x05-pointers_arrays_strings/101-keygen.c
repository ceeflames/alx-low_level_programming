#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - keygen
 *
 * Return: Always 0.
 */
int main(void)
{
	int myrand;
	int count;
	int sum;

	srand(time(NULL));
	for (count = 0, sum = 2772; sum > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		sum -= myrand;
	}
	printf("%c", sum);

	return (0);
}
