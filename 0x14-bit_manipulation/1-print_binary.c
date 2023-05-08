#include "main.h"
/**
 * print_binary - print binary numbers
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n / 2);
}
_putchar((n % 2) + 48);
}
