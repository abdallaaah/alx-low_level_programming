#include "main.h"
/**
 * malloc_checked - function to reserve memory
 * @b: the size will hold
 * Return: it is void
 */
void *malloc_checked(unsigned int b)
{
char *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
free(ptr);
exit(98);
}
return (ptr);
}
