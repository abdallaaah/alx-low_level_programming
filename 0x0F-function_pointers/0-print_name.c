#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: name of human
 * @f: function pointe
 * Return - void no return
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
