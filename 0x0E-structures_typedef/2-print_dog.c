#include "dog.h"

/**
 * print_dog - Functions that prints struct dog
 * @d : Pointer that points to the struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
	}
	if (d->age == NULL)
	{
		printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
		else
			printf("Owner: %d\n", d->owner);
	}