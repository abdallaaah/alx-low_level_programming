#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int **alloc_grid(int width, int height)
{
int **arr;
int i = 0, x = 0;
if (width <= 0)
{
return (NULL);
}
if (height <= 0)
{
return (NULL);
}
arr = malloc(sizeof(int) * height);
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
for (x = 0; x < i; x++)
{
free(arr[x]);
}
free(arr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (x = 0; x < width; x++)
{
arr[i][x] = 0;
}
}
return (arr);
}
