#include <funcion_pointers.h>
#include <stdio.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
/**
 * array_iterator - iterate over array with display
 * @array: array
 * @size: times of array to print
 * @action: pointer 
 * Return: void
 */
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
