#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a structure that contains information of a dog
 * Description: provides data for dog initialization
 * @name: dog name
 * @age: age of the dog
 * @owner:  name of dog owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
