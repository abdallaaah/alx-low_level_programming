#include "main.h"
/**
 * *string_nconcat - function
 * @s1: first one
 * @s2: second one
 * @n: the number
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n >= strlen(s2))
{
n = strlen(s2);
}
new = malloc(sizeof(char) * (strlen(s1) + n + 1));
if (new == NULL)
{
return (NULL);
}
strcpy(new, s1);
strncat(new, s2, n);
return (new);
}
