#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - Concatenate args with newline
 * @ac: Argument count
 * @av: Arguments
 * Return: char-pointer on Success or NULL
*/
char *argstostr(int ac, char **av)
{
int i;
char **str;
if (ac == 0 || !av)
return (NULL);
str = malloc(ac * sizeof(char));
if (str == NULL)
{
free(str);
return (NULL);
}
for (i = 0; i < ac; i++)
{
str[i] = strcat(str[i], av[i]);
}
return ((char *) str);
}
