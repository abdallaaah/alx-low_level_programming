#include "main.h"
/**
 * _realloc - the function to malloc new ptr
 * @ptr: old ptr
 * @old_size: old size
 * @new_size: new size
 * Return: void no return
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_p;
unsigned int i = 0;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
new_p = malloc(new_size);
if (new_p == NULL)
{
free(new_p);
return (NULL);
}
if (old_size < new_size)
{
for (i = 0; i <= old_size; i++)
{
((char *)new_p)[i] = ((char *)ptr)[i];
}
}
if (old_size > new_size)
{
for (i = 0; i <= new_size; i++)
{
((char *)new_p)[i] = ((char *)ptr)[i];
}
}
return (new_p);
}
