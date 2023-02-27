#include <string.h>

/**
 * _strcpy - Copy a string to another string variable
 * @dest: Variable to copy to
 * @src: String to copy
 * Return: *char
*/
char *_strcpy(char *dest, char *src)
{
int n = 0, l = strlen(src);
for (; n < l; n++)
{
*(dest + n) = src[n];
}
return (dest);
}
