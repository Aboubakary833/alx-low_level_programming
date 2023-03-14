#include <stdlib.h>

/**
 * free_grid - Free all grid
 * @grid: The grid
 * @height: The grid height
 * Return: void
*/
void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
