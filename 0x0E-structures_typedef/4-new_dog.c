#include "dog.h"
#include <stdlib.h>

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
	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++);

}
