#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - cocatine two strings
 * @s1: string one
 * @s2: string two
 * @n: number
 * Return: return pointer
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
if (sz2 != n)
{
strncat(ptr, s2, n);
}
return (ptr);
}       
