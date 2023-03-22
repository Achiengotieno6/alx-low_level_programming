#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - created a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *y_dog;
	int i, lname, lowner;

	y_dog = malloc(sizeof(*y_dog));
	if (y_dog == NULL || !(name) || !(owner))
	{
		free(y_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	y_dog->name = malloc(lname + 1);
	y_dog->owner = malloc(lowner + 1);

	if (!(y_dog->name) || !(y_dog->owner))
	{
		free(y_dog->owner);
		free(y_dog->name);
		free(y_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		y_dog->name[i] = name[i];
	y_dog->name[i] = '\0';

	y_dog->age = age;

	for (i = 0; i < lowner; i++)
		y_dog->owner[i] = owner[i];
	y_dog->owner[i] = '\0';

	return (y_dog);
}
