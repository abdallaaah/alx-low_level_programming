#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - conacatine two strings
 * @s1: first string
 * @s2: second string
 * Return: return the new string
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
unsigned int size;
size = strlen(s1) + strlen(s2);
new_str = malloc((sizeof(char) * size) +1);
if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, s1);
new_str = strcat(new_str, s2);
return (new_str);
}
