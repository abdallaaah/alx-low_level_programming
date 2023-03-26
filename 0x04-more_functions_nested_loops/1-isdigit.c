#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - function to test if input is digit or not
 * @c: declare
 * Return: return 1 in success case
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
