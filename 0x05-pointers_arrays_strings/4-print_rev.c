#include <string.h>
#include "main.h"
/**
 * print_rev - Print a string in reverse
 * 
 * Return: void
*/
void print_rev(char *s)
{
    int c = strlen(s);
    int cc = c;
    int i = 0;
    char *r;
    for (; i < c; i++)
    {
    r[i] = s[cc - 1];
    cc--;
    }
    _puts(r);
}
