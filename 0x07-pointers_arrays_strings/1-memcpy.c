#include "main.h"
#include <string.h>
/**
 * _memcpy - copy value
 * @dest: destination of copy
 * @src: source of copy
 * @n: ntimes of cpy
 * Return: return destiantion pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
