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
int i;
i = 0;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
