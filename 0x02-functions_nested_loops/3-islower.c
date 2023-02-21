#include <ctype.h>
#include "main.h"

/**
 * _islower - check if a character is in lowercase
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
return (islower(c) ? 1 : 0);
}
