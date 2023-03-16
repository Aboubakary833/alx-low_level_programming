#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Member number
 * @size: data type size
 * Return: void pointer on Success or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = (void *)malloc(nmemb * size);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
else
return (ptr);
}
