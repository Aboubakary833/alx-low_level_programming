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
if (strchr(" \t\n,;.!?\"(){}\0\r\f\v\n", str[c]))
{
nc = c + 1;
*(str + nc) = toupper(str[nc]);
}
else if (c == 0)
*(str + c) = toupper(str[c]);
}
return (str);
}
