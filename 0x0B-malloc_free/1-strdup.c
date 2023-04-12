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
new_str = (char *)malloc(sizeof(str) - 1);
new_str = strdup(str);
if (new_str == NULL)
{
return (NULL);
}
return (new_str);
}
