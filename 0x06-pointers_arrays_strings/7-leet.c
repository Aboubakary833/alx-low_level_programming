#include <string.h>

/**
 * leet - Encode a string
 * @str: String to encode
 * Return: char *
*/
char *leet(char *str)
{
char *letters = "aAeEoOtTlL";
int digits[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
int c = 0, l = strlen(letters), rl, i;
char *r;
for (; str[c] != '\0'; c++)
{
if (strchr(letters, str[c]))
{
r = strchr(letters, str[c]);
rl = strlen(r);
i = l - rl;
*(str + c) = (digits[i] + '0');
}
}
return (str);
}
