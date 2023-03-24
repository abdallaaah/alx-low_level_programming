#include "main.h"
/*
 * print_sign -> chech number
 * @n: the number we will check
 * Return: return the 
 *
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
if (n == 0 )
{
return (0);
_putchar('0');
}
if (n < 0)
{
return (-1);
_putchar('-');
}
return (0);
}
