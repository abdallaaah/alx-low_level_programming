#include "main.h"
#include <string.h>
/**
 * _strchr - sting search function
 * @s: the string we will search on
 * @c: this the char we search for
 * Return: return all function
 */
char *_strchr(char *s, char c)
{
char *ret;
ret = strchr(s, c);
return (ret);
}
