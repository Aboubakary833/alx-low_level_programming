#include <string.h>

/**
 * _strncat - Concatenate two string
 * @dest: Destination string
 * @src: Source string
 * @n: The number of bytes
 * Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
