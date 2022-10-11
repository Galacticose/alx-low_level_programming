#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: name of structure dog
 *
 * Does not return any value
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %f\n", d->age);
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", d->owner);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	if (d == NULL)
	{
		printf("\n");
	}
}
