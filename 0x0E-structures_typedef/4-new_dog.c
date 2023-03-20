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
dog_t _new_dog;
_new_dog.name = name;
_new_dog.age = age;
_new_dog.owner = owner;

return ((dog_t *)&_new_dog);
}
