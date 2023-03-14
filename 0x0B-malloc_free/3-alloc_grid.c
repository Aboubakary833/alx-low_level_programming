#include <stdlib.h>

/**
 * alloc_grid - Return a 2D array of 0
 * @width: The width
 * @height: The height
 * Return: int array pointer or NULL
*/
int **alloc_grid(int width, int height)
{
int **grid, i, j;
if (width == 0 || height == 0)
return (NULL);
grid = (int **) malloc(width * sizeof(int *));
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (i = 0; i < width; i++)
{
grid[i] = malloc(height * sizeof(int *));
if (grid[i] == NULL)
{
for (j = 0; j < height; j++)
free(&grid[i][j]);
}
}

for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
