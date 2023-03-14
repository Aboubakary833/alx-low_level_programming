#include <stdlib.h>

/**
 * alloc_grid - Return a 2D array of 0
 * @width: The width
 * @height: The height
 * Return: int array pointer or NULL
*/
int **alloc_grid(int width, int height)
{
int **grid, size, i, j, *el_ptr;
if (width == 0 || height == 0)
return (NULL);
size = (sizeof(int *) * width) + ((sizeof(int) * height) * width);
grid = malloc(size);
el_ptr = (int *)(grid + 1);
for (i = 0; i < width; i++)
{
grid[i] = (el_ptr + height * i);
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
grid[i][j] = 0;
}
return (grid);
}
