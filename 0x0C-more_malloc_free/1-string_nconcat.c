#include <stdlib.h>
#include "main.h"

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
size = (int) n;

s1 = s1 == NULL ? "" : s1;
s2 = s2 == NULL ? "" : s2;

if (size < 0)
return (NULL);
if (size >= _strlen_recursion(s2))
{
size = _strlen_recursion(s2);
}
length = size + _strlen_recursion(s1);
str = (char *) malloc(length *sizeof(char *));
if (str == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < size; j++)
str[i + j] = s2[j];
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
