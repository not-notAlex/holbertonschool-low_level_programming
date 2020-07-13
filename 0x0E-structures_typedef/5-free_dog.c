#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - set a dog free in memory
 * @d: dog to set free
 *
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
