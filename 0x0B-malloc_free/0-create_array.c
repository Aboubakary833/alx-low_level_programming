#include <stdlib.h>

/**
 * create_array - Create an array of character
 * @size: The size of the array
 * @c: The character
 * Return: String on Success or NULL on Error
*/
char *create_array(unsigned int size, char c)
{
int i, c_size = size ? size : 0;
char *s = malloc(c_size * sizeof(char));
if (c_size == 0 || s == NULL)
return (NULL);
else
{
for (i = 0; i < c_size; i++)
{
s[i] = c;
}
s[i] = '\0';
}

return (s);
}
