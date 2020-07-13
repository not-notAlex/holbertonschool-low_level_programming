#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = 0, len2 = 0, a;
	dog_t *doggo;
	char *newname;
	char *newowner;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->age = age;
	if (name)
	{
		while (name[len1])
			len1++;
		newname = malloc(len1 + 1);
		if (newname == NULL)
			return (NULL);
		for (a = 0; name[a]; a++)
			newname[a] = name[a];
		newname[a] = '\0';
	}
	else
		doggo->name = NULL;
	if (owner)
	{
		while (owner[len2])
			len2++;
		newowner = malloc(len2 + 1);
		if (newowner == NULL)
			return (NULL);
		for (a = 0; owner[a]; a++)
			newowner[a] = owner[a];
		newowner[a] = '\0';
	}
	else
		doggo->owner = NULL;
	doggo->name = newname;
	doggo->owner = newowner;
	return (doggo);
}
