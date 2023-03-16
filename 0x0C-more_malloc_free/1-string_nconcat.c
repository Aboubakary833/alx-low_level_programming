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
char *ptr;
int num, len, i, j;
num = n;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (num < 0)
{
return (NULL);
}
if (num >= _strlen(s2))
{
num = _strlen(s2);
}
len = _strlen(s1) + num;
ptr = malloc(sizeof(*ptr) * len);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < num; j++)
{
ptr[i + j] = s2[j];
}
ptr[i + j] = '\0';
return (ptr);
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
