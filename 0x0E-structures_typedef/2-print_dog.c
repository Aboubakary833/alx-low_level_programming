#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print a dog
 * @d: The dog
 * Return: void
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
else
{
printf("Name: %s\n", (d->name ? d->name : "(nil)"));
if (d->age < 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
}
}
