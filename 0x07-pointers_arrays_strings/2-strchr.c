#include "main.h"
#include <string.h>
/**
 * strchr - sting search function
 * @c: char we will search
 * Return: this will return the string we find with all next
 */
char *_strchr(char *s, char c)
{
char *ret;
ret = strchr(s, c);
return (ret);
}
