#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print name
 * @name: string with name
 * @f: the pointer to function
 * Return: return no thing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
