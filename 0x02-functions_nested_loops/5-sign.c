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
_putchar(43);
}
if (n == 0 )
{
return (0);
_putchar(45);
}
if (n < 0)
{
return (-1);
_putchar(48);
}
return (0);
}
