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
int c = 0;
if (size <= 0)
{
return (-1);
}
if (array == NULL)
return (0);
for (i = 0; i < size; i++)
{
c = cmp(array[i]);
if (c != 0)
{
break;
}
}
if (c == 1)
{
return (-1);
}
return (i);
}
