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
int i = 0;
if (str == NULL)
{
return (NULL);
}
while(str[i] != '\0')
{
i++;
}
arr = malloc(sizeof(char) * (i + 1));
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0;  str[i]; i++)
{
arr[i] = str[i];
}
return (arr);
}
