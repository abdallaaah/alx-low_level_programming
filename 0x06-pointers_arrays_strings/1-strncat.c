#include "main.h"
#include <string.h>
/**
 * _strncat - conatinate with n numbers
 * @dest: destination
 * @src: source
 * @n: number of concats
 * Return: return the dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
