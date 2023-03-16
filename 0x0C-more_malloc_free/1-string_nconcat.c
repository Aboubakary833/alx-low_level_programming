#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenate two string
 * @s1: First string
 * @s2: Second string
 * @n: Size
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cp_1, *cp_2, *str;
int i, j, size, length;
size = (int) n;

cp_1 = s1 == NULL ? "" : s1;
cp_2 = s2 == NULL ? "" : s2;

if (size < 0)
return (NULL);
length = size + _strlen_recursion(cp_1);
str = (char *) malloc(length *sizeof(char *));
if (str == NULL)
return (NULL);
for (i = 0; cp_1[i] != '\0'; i++)
str[i] = cp_1[i];
for (j = 0; j < size; j++)
str[i + j] = cp_2[j];
str[i + j] = '\0';
return (str);
}

/**
 * _strlen_recursion - Return the length of a string
 * @s: The string
 * Return: int
*/
int _strlen_recursion(char *s)
{
int l = 0;
if (s[0] != '\0')
{
l += 1;
l += _strlen_recursion(s + 1);
}

return (l);
}
