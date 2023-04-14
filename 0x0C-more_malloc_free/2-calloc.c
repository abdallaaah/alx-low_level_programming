#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - array with fill all with zero
 * @nmemb: number of array
 * @size: size of array
 * Return: return ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = calloc(nmemb, size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
