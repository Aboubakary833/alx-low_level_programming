#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i, lenN, lenO;
struct dog *n_dog = NULL;
lenN = 0;
while (name[lenN] != '\0')
{
lenN++;
}
lenO = 0;
while (owner[lenO] != '\0')
{
lenO++;
}

n_dog = malloc(sizeof(struct dog));

if (n_dog == NULL)
{
free(n_dog);
retun (NULL);
}
n_dog->name = malloc(lenN + 1);
if (n_dog->name == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}
n_dog->owner = malloc(lenO + 1);
if (n_dog->owner == NULL)
{
free(n_dog->name);
free(n_dog->owner);
free(n_dog);
return (NULL);
}
for (i = 0; i <= lenN; i++)
{
n_dog->name[i] = name[i];
}
for (i = 0; i <= lenO; i++)
{
n_dog->owner[i] = owner[i];
}
n_dog->age = age;
return (n_dog);
}
