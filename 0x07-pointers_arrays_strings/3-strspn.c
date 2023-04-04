#include "main.h"
#include <string.h>
/**
 * _strspn - calculate string len
 * @s: string will search on
 * @accept: what we search for
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int len;
len = strspn(s, accept);
return (len);
}
