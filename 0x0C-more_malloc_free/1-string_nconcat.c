#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - string cocatinate two string
 * @s1: the first one
 * @s2: the second one
 * @n: the number we will conca
 * Return: return pon
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int tot;
unsigned int sz2;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
sz2 = strlen(s2);
tot = strlen(s1) + strlen(s2);
ptr = malloc((sizeof(char) * tot)+1);
if (ptr == NULL)
{
return (NULL);
}
ptr = strcpy(ptr, s1);
if (n >= sz2)
{
strcat(ptr, s2);
}
else if (sz2 - 1 != n)
{
strncat(ptr, s2, n);
}
ptr[tot + 1] = '\0';
return (ptr);
}
