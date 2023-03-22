#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - structure that initializes dog object
 * @d: object of dog created
 * @name: name of dog
 * @age: dog age
 * @owner: name of dog owner
 * Return: return nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
