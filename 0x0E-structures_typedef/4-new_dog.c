#include "dog.h"
#include <stdio.h>

/**
 * *new_dog - function that creates a new dog
 * @name: pointer to the name
 * @age: second member
 * @owner: ointer to owner
 * Return: NULL (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	struct dog *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
}
