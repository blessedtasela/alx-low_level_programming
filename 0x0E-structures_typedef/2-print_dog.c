#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints dog information
 * @d: object of dog created
 * Return: return nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
	d->name = "(nil)";
	if (d->owner == NULL)
	d->owner = "(nil)";
	printf("Name: %s\nAge: %1f\nOwner: %s\n", d->name, d->age, d->owner);
}
