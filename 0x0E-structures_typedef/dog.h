#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog
 * @name: The name
 * @age: The age
 * @owner: The owner
 * Description: A structure for a dog
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Type definition for dogs
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
