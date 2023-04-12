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
int i;
char *new_str;
i = 1;
if (str == NULL)
{
return (NULL);
}
while (str[i])
{
i++;
}
new_str = malloc((sizeof(char) * i) -4);
new_str = strdup(str);
if (new_str == NULL)
{
return (NULL);
}
new_str[i] = '\0';
return (new_str);
}
