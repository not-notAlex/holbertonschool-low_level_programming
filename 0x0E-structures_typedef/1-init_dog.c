#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes values for dog structure
 * @d: the dog structure
 * @name: dog name
 * @age: dog age
 * @owner: doggo owner
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name)
		d->name = name;
	else
		d->name = NULL;
	d->age = age;
	if (owner)
		d->owner = owner;
	else
		d->owner = NULL;
}
