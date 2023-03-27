#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_last_digit -> chech
 * @num: number will play with
 * Return: return
 */
int print_last_digit(int num)
{
int x;
if (num < 0)
{
x = num % 10;
x = x * -1;
}
else
{
x = num % 10;
}
_putchar(x + '0');
return (x);
}
