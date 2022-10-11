#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: stores a character
 * @age: stores a float
 * @owner: stores a character;
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	dg = malloc(sizeof(dog_t));
	if (dg != NULL)
	{
		dg->name = name;
		dg->age = age;
		dg->owner = owner;
		return (dg);
	}
	else
	{
		return (NULL);
	}
}
