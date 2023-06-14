#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function to concatunate all args
 * @ac: number of elements
 * @av: the elments
 * Return: the arr
 */
char *argstostr(int ac, char **av)
{
char *arr;
int z = 0;
int i = 0, x = 0, len = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
len += strlen(av[i]);
}
arr = malloc(sizeof(char) * (ac + len + 1));
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (x = 0; av[i][x] != '\0'; x++)
{
arr[z] = av[i][x];
z++;
}
arr[z] = '\n';
z++;
}
return (arr);
}
