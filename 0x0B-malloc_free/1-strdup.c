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
int size;
char *new_str;
if (strdup(str))
{
size = sizeof(str);
new_str = malloc(size);
new_str = strdup(str);
}
else if (str == NULL)
{
return (NULL);
}
return (new_str);
}
