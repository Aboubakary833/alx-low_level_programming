#include <string.h>
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: String to reverse
 * Return: void
*/
void rev_string(char *s)
{
    int l = strlen(s) - 1;
    int n = 0;
    char r[100];
    for (; l >= 0; l--)
    {
        r[n] = s[l];
        n++;
    }
    for (; l < n; l++)
    {
        *(s + l) = r[l];
    }
}
