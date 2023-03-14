#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 * Return: char pointer on Success or NULL
*/
char *str_concat(char *s1, char *s2)
{
char *final_str, *cp_s1, *cp_s2;
int i, j, len;
cp_s1 = (s1 == NULL ? "" : s1);
cp_s2 = (s2 == NULL ? "" : s2);
len = (strlen(cp_s1) + strlen(cp_s2));
final_str = malloc((len + 1) * sizeof(char));

if (final_str == NULL)
return (NULL);

for (i = 0; cp_s1[i] != '\0'; i++)
{
final_str[i] = cp_s1[i];
}
for (j = 0; cp_s2[j] != '\0'; j++)
{
final_str[i] = cp_s2[j];
i++;
}
final_str[i] = '\0';

return (final_str);
}
