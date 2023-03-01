#include <stdio.h>
/**
 * reverse_array - Reverse int array content
 * @a: Array to reverse
 * @n: Element number
 * Return: void
*/
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1, t;
for (; i < j; i++)
{
t = a[i];
*(a + i) = a[j];
*(a + j) = t;
j--;
}
}
