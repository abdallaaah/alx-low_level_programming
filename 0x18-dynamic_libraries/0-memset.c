#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - fill a block of memory by value
 * @s: pointer s
 * @b: constant will be filled
 * @n: size of filled
 * Return: return pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
