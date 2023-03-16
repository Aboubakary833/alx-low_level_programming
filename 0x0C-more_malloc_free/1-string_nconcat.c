#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two string
 * @s1: First string
 * @s2: Second string
 * @n: Size
 * Return: char-pointer on Success or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, size, length;
char *str;
size = n;

s1 = s1 == NULL ? "" : s1;
s2 = s2 == NULL ? "" : s2;

if (size < 0)
return (NULL);
if (size >= (int) strlen(s2))
{
size = strlen(s2);
}
length = size + strlen(s1) + 1;
str = malloc(sizeof(char *) * length);
if (str == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < size; j++)
str[i + j] = s2[j];
str[length - 1] = '\0';
return (str);
}
