#include "main.h"
#include <string.h>
/**
 * _strncpy - copy the string
 * @dest: destination
 * @src: source
 * @n: numbers
 * Return: return the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
