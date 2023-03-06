#include <string.h>

/**
 * _memset - Fill a memory area
 * @dest: The destination
 * @src: The copy source
 * @n: The size
 * Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy((void *)dest, (void *)src, n);
return (dest);
}
