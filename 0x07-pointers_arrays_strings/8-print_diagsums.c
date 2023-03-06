#include <stdio.h>

/**
 * print_diagsums - Print diagonal sum
 * @a: The int array-pointer
 * @size: The size
 * Return: void
*/
void print_diagsums(int *a, int size)
{
int s = (size * size), i, j;
int firstTotal = 0, secondTotal = 0;
for (i = 0; i < s; i += size)
{
firstTotal += *(a + i);
}
for (j = (s - 1); j >= 0; j -= size)
{
secondTotal += *( a + j);
}
printf("%d, %d\n", firstTotal, secondTotal);
}

