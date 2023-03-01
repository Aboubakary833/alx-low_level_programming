#include <ctype.h>
#include <string.h>

/**
 * string_toupper - Transform a string to uppercase
 * @str: String to transform
 * Return: *char
*/
char *string_toupper(char *str)
{
int l = strlen(str), c = 0;
char *r = str;
for (; c < l; c++)
{
*(r + c) = toupper(str[c]);
}
return (r);
}
