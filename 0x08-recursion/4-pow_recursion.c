#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * _pow_recursion - make the number with power
 * @x: base
 * @y: power
 * Return: return number
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else
{
if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
}
