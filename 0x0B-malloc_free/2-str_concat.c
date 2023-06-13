#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function to conatiunate strings
 * @s1: first string
 * @s2: secinde string
 * Return: return the new string
 */
char *str_concat(char *s1, char *s2)
{
int lens1 = 0, lens2 = 0, len = 0;
int i = 0, x = 0;
char *new_string;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[lens1] != '\0')
{
lens1++;
}
while (s2[lens2] != '\0')
{
lens2++;
}
len = lens1 + lens2;
new_string = malloc((len *sizeof(char) + 1));
if (new_string == NULL)
{
free(new_string);
return (NULL);
}
for (i = 0; s1[i]; i++)
{
new_string[x] = s1[i];
x++;
}
for (i = 0; s2[i]; i++)
{
new_string[x] = s2[i];
x++;
}
return (new_string);
}
