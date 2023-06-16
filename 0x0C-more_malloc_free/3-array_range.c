#include "main.h"
/**
 * array_range - function fill min and max
 * @min: the least num
 * @max: the max num
 * Return: int ptr
 */
int *array_range(int min, int max)
{
int *ptr;
int i = 0;
int z = 0;
int s = min;
if (min > max)
{
return (NULL);
}
for (i = 0; i <= max; i++)
{
z++;
}
ptr = malloc(sizeof(int) * (z + 1));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i <= max; i++)
{
ptr[i] = s;
s++;
}
return (ptr);
}
