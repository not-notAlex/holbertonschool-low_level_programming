#ifndef HOLBERTON_H_
#define HOLBERTON_H_

/**
 * struct dog - info about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 *
 * Description: Stores info about dogs and owners
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
