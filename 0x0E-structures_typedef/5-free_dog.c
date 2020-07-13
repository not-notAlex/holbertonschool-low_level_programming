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
	free(d->name);
	free(d->owner);
	free(d);
}
