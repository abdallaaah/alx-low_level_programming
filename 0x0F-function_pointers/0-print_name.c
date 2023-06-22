#include "function_pointers.h"
/**
 * print_name - function a call back function
 * @name: name we will pass
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
return;
}
f(name);
}
