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
if (str == NULL)
{
return (NULL);
}
new_str = (char *)malloc(sizeof(str));
new_str = strdup(str);
if (str == NULL || new_str == NULL)
{
return (NULL);
}
return (new_str);
}
