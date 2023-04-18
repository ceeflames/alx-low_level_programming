#ifndef _DOG_
#define _DOG_

/**
 * struct dog - dog structure
 * @name:member one
 * @age: member two
 * @owner: member three
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif
