#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int a;
	float f;

	printf("Size of a char: %lu.ln"(unsigned long)sizeof(c));
	printf("Size of an int: %lu.ln"(unsigned long)sizeof(i));
	printf("Size of a long int: %lu.ln"(unsigned long)sizeof(d));
	printf("Size of a long long int: %lu.ln"(unsigned long)sizeof(a));
	printf("Size of a float: %lu.ln"(unsigned long)sizeof(f));
}
