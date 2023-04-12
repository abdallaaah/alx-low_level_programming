#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - this the function create str with dynamic size
 * @size: the size of char
 * @c: the chharcter
 * Return: return the string
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
if (size == 0)
{
return (0);
}
else if (size > 0)
{
str = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);
}
else
{
return (NULL);
}
}
