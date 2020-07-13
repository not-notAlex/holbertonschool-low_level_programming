#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * length - gets the length of a string
 * @str: string to measure
 *
 * Return: the total length
 */
int length(char *str)
{
	int a = 0;

	if (str == NULL)
		return (0);
	while (str[a])
		a++;
	return (a);
}


/**
 * new_dog - creates a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = length(name), len2 = length(owner), a;
	dog_t *doggo;
	char *newname, *newowner;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->age = age;
	if (name)
	{
		newname = malloc(len1 + 1);
		if (newname == NULL)
		{
			free(doggo);
			return (NULL);
		}
		for (a = 0; name[a]; a++)
			newname[a] = name[a];
		newname[a] = '\0';
	}
	else
		doggo->name = NULL;
	if (owner)
	{
		newowner = malloc(len2 + 1);
		if (newowner == NULL)
		{
			free(newname);
			free(doggo);
			return (NULL);
		}
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
