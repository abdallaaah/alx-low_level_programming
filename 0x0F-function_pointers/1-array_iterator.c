#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - array iterrator with pointer function
 * @array: array filled of numbers
 * @size: size of aray
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || size == 0 || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
