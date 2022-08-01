#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes dog
 * @name : name of the dog
 * @age : age of the dog
 * @owner : owner of the dog
 * @d: pointer to initialize the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}