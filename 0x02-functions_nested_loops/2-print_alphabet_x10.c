#include "main.h"

/**
 * Print ten time alphabet
 * Return void
*/
void print_alphabet_x10(void)
{
int n;
char l;

for (n = 0; n < 10; n++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
if (l == 'z')
{
_putchar('\n');
}
}
}
}
