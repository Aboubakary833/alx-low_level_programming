#include <ctype.h>
#include "main.h"

/**
 * Check if a character is in lower case
 * @c: Character to check case
 * Return: On success 1
 * On error, 0
*/
int _islower(int c)
{
return (islower(c) ? 1 : 0);
}
