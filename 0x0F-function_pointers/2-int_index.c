#include "function_pointers.h"
/**
 * int_index - int index function
 * @array: the array we will search one
 * @size: size of the array
 * @cmp: function pointer
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
