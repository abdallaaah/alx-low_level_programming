#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - searches for a value in a sorted array using binary search
* @array: pointer to the first element of the array
* @size: number of elements in the array
* @value: the value to search for
* Return: index where value is located, or -1 if not found or on error
*/
int binary_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t i;
if (array == NULL)
return (-1);

while (low <= high)
{
size_t mid = (low + high) / 2;

printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
else
printf("\n");
}
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}
return (-1);
}

