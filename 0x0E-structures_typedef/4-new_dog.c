#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: dog_t pointer on Success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *_new_dog;
int nameLen = 0, ownerLen = 0, i;
while (name[nameLen] != '\0')
nameLen++;
while (owner[ownerLen] != '\0')
ownerLen++;
_new_dog = malloc(sizeof(struct dog));
if (_new_dog == NULL)
free(_new_dog);
_new_dog->name = malloc(nameLen + 1);
if (_new_dog->name == NULL)
free(_new_dog->name);
_new_dog->owner = malloc(ownerLen + 1);
if (_new_dog->owner == NULL)
{
free(_new_dog->owner);
free(_new_dog->name);
}
for (i = 0; i < nameLen; i++)
_new_dog->name[i] = name[i];
for (i = 0; i < ownerLen; i++)
_new_dog->owner[i] = owner[i];
_new_dog->age = age;
return (_new_dog);
}
