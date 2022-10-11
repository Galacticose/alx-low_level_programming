#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the details of a dog
 * @d: name of structure
 *
 * Does not return any value
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
	}
}
