#include "function_pointers.h"
/**
 * array_iterator - function to itterte over array
 * @array: the array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL || size == 0 || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}

}
