#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - Print a name
 * @name: The name to print
 * @f: The callback function
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
(*f)(name);
else
exit(1);
}
