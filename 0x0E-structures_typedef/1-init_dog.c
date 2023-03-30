#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: address of dog
 * @name: name of the dog
 * @age: age of a dog
 * @owner: owner of the dog
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