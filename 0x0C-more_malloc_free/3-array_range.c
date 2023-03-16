#include <stdlib.h>

/**
 * array_range - Get a range of integers
 * @min: Minimal int
 * @max: Maximal int
 * Return: int-pointer on Success or NULL
*/
int *array_range(int min, int max)
{
int *range, size, i;
if (min > max)
return (NULL);
size = (max - min) + 1;
range = (int *)malloc(sizeof(int) * size);
if (range == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
range[i] = min;
min++;
}
return (range);
}
