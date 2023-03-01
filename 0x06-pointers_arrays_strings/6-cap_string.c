#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalize a string
 * @str: String to capitalize
 * Return: char *
*/
char *cap_string(char *str)
{
int l = strlen(str), c = 0, nc;
for (; c < l; c++)
{
if (strchr(" \n,;.!\?\"\b(){}", str[c]))
{
nc = c + 1;
*(str + nc) = toupper(str[nc]);
}
}
return (str);
}
