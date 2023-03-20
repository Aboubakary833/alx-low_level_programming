#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a dog's informations
 * @d: The dog instance
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
