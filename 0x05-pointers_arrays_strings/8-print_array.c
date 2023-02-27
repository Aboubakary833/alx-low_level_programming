#include <stdio.h>

/**
 * print_array - Print n element of an array
 * @a: The array
 * @n: The number
 * Return: void
*/
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
if (i > 0)
{
printf(", %d", a[i]);
}
else
printf("%d", a[i]);
}
printf("\n");
}
