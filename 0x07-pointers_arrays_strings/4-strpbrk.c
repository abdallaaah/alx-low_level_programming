#include "main.h"
#include <string.h>
/**
 * _strpbrk - locate for the first occurence
 * @s: string we will search for
 * @accept: what we will search for
 * Return: pointer with string
 */
char *_strpbrk(char *s, char *accept)
{
char *x;
x = strpbrk(s, accept);
return (x);
}
