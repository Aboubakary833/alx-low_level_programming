#include "main.h"

/**
 * print_chessboard - Print a chessboard
 * @a: char array
 * Return: void
*/
void print_chessboard(char (*a)[8])
{
int c, cc;
for (c = 0; c < 8; c++)
{
for (cc = 0; cc < 8; cc++)
{
_putchar(a[c][cc]);
if(cc == 7)
{
_putchar('\n');
}
}
}
}
