#include <string.h>

/**
 * _strspn - Get the number of bytes in the initial segment
 * @s: The string
 * @accept: The char list
 * Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
