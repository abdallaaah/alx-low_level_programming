#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - string duplicate function
 * @str: the original string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *arr;
if (str == NULL)
{
return (NULL);
}
arr = malloc((strlen(str) + 1) * sizeof(char));
if (arr == NULL)
{
free(arr);
return (NULL);
}
arr = strdup(str);
if (arr == NULL)
{
return (NULL);
}
return (arr);
}
