#include <stdlib.h>

/**
 * _strdup - Duplicate a char pointer
 * @str: The string to duplicate
 * Return: A char pointer on Success or NULL when fails
*/
char *_strdup(char *str)
{
char *str_cp;
int c = 0;
if (str == NULL)
return (NULL);
str_cp = malloc(sizeof(str) * sizeof(char));
for (; str[c] != '\0'; c++)
str_cp[c] = str[c];
str_cp[c] = '\0';

return (str_cp);
}
