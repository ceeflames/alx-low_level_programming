#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable
 * of type struct dog
 * @d:pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner:pointer to dog owner
 * Return: 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
