#include <string.h>

/**
 * _memset - Fill a memory area
 * @s: The char-pointer
 * @b: The replace char
 * @n: The size
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
memset((void *)s, b, n);
return (s);
}
