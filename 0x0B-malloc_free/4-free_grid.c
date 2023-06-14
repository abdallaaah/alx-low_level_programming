#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_grid - function to free 2d array
 * @grid: pointer to pointer array
 * @height: the height of tghhe array
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i = 0;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
