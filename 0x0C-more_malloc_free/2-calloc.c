#include "main.h"
/**
 * _calloc - function to malloc memory
 * @nmemb: number of elemnts
 * @size: size of elemnt
 * Return: char pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
