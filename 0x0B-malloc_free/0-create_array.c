#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function to return array with all charicter
 * @size: size of array
 * @c: size will fill in arrua
 * Return: return pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);
if (arr == NULL && size != 0)
{
free(arr);
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
