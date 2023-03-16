#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate a memory
 * @b: Memory size
 * Return: int-pointer on Success or Error
*/
void *malloc_checked(unsigned int b)
{
int *ptr = (int *)malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
