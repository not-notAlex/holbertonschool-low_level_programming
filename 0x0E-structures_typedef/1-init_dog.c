#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
