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
if (str == NULL || strlen(str) == 0)
{
return (NULL);
}
/*arr = malloc(strlen(str) * sizeof(char));*/
arr = (char *) malloc(strlen(str) + 1);
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
