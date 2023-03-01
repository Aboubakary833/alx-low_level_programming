#include <string.h>

/**
 * leet - Encode a string
 * @str: String to encode
 * Return: char *
*/
char *leet(char *str)
{
char *letters = "aAeEoOtTlL";
int digits[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1}, c = 0;
for (; str[c] != '\0'; c++)
{
if (strchr(letters, str[c]))
{
*(str + c) = (digits[strlen(letters) - strlen(strchr(letters, str[c]))] + '0');
}
}
return (str);
}
