#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: name of human
 * @f: function pointe
 * Return - void no return
 **/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
{
return;
}
f(name);
}
