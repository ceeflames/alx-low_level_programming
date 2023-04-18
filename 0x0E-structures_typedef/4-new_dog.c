#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - function that creates a new dog
 * @name: pointer to the name
 * @age: second member
 * @owner: pointer to owner
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
	for (i = 0; name[i]; i++)

	dog->name = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (j = 0; owner[j]; j++)
		dog->owner = malloc(sizeof(char) * j);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[k] = owner[k];
	return (dog);
}
