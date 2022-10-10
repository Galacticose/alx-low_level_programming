#include "dog.h"

/**
 * init_dog - initializes a structure
 * @d: name of structure
 * @name: stores a character
 * @age: stores a float
 * @owner: stores a character
 *
 * Does not return any value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
