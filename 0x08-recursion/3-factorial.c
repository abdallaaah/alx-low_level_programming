#include "main.h"
#include <stdio.h>
/**
 * factorial - return fact number
 * @n : number
 * Return: return factorial
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else
{
if (n <= 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
}
