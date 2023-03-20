#ifndef _DOG_H
#define _DOG_H

/**
 * dog - A structure for a dog
 * @name: The name
 * @age: The age
 * @owner: The owner
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * Type definition for dogs
*/
typedef struct dog dog_t;

/**
 * Dog functions prototypes
*/

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
