#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a char pointer
 * @str: The string to duplicate
 * Return: A char pointer on Success or NULL when fails
*/
char *_strdup(char *str)
{
char *str_cp;
int c = 0, size;
if (str == NULL)
return (NULL);
size = strlen(str);
str_cp = malloc((size + 1) * sizeof(char));
for (; c < size; c++)
{
str_cp[c] = str[c];
}
str_cp[c] = '\0';

return (*str_cp);
}
