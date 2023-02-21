#include <ctype.h>
#include "main.h"

/**
 * _islower - check if c is a letter
 * @c: The value to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
return (isalpha(c) ? 1 : 0);
}
