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
_putchar('+');
return (1);
}
if (n == 0 )
{
_putchar(45);
return (0);
}
if (n < 0)
{
_putchar(48);
return (-1);
}
return (0);
}
