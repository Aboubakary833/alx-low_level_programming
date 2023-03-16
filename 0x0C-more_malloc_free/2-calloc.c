#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Member number
 * @size: data type size
 * Return: void pointer on Success or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0;
int total = nmemb * size;
char *str_ptr;
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(total);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
str_ptr = ptr;
for (; i < total; i++)
str_ptr[i] = '\0';
return (ptr);
}
