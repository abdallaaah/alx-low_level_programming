#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create array with range
 * @min: minumum number
 * @max: maximum number
 * Return: ptr to the new array
 */
int *array_range(int min, int max)
{
int size;
int *ptr;
if (min > max)
{
return (NULL);
}
size = max - min;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
