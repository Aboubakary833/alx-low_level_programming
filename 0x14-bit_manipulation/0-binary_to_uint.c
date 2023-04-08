#include "main.h"

/**
 * binary_to_uint - Convert from base 2 to base 10
 * @b: Binary representation of the integer
 * Return: The integer or 0
*/
unsigned int binary_to_uint(const char *b)
{
int l = (bit_length(b) - 1);
int multiplicator = 1;
int i;
unsigned int result = 0;
if (b == NULL)
return (0);
for (; l >= 0; l--, multiplicator *= 2)
{
	if (b[l] == '0' || b[l] == '1')
	{
	i = b[l] - '0';
	result += (multiplicator * i);
	}
	else
	{
		result = 0;
		break;
	}
}

return (result);
}

/**
 * bit_length - Get the length of the string
 * @b: The string representation of the binary number
 * Return: The length
*/
int bit_length(const char *b)
{
int c = 0;
while (b[c] != '\0')
c++;
return (c);
}
