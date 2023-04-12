#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - finction which duplicate string
 * @str: string need to be dup
 * Return: return the string
 */
char *_strdup(char *str)
{
char *new_str;
if (strdup(str))
{
new_str = strdup(str);
}
else if (str == NULL)
{
return (NULL);
}
return (new_str);
}
