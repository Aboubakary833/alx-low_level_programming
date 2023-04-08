#include "main.h"

/**
 * binary_to_uint - Convert from base 2 to base 10
 * @b: Binary representation of the integer
 * Return: The integer or 0
*/
unsigned int binary_to_uint(const char *b)
{
int multiplicator = 1;
int i;
unsigned int result = 0;
if (b == NULL)
return (0);
for (i = 0; b[i]; i++, multiplicator *= 2)
{
	if (b[i] < '0' || b[i] > '1')
	{
	result = 0;
	break;
	}
	result = 2 * result + b[i] - '0';
}

return (result);
}
