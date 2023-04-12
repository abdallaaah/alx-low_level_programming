#include <stdlib.h>
/**
 * alloc_grid - grid allocation for 
 * @width: width if 2d
 * @height: height of array
 * Return: return the 2d
 */
int **alloc_grid(int width, int height)
{
int i;
int j;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = calloc(width, sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
return (grid);
}
