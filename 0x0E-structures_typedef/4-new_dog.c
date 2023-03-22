#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of string
 * @s: variable to be used
 * Return: return lengt of char
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}

/**
 * char *_strcpy - copy string pointer
 * @dest: first parameter
 * @src: second parameter
 * Return: return string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
	i++;
	}
	for ( ; j < i ; j++)
	dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new object of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: pointer to the new dog on success otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	return (NULL);

	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
	free(d);
	return (NULL);
	}

	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
	free(d);
	free(d->name);
	return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
