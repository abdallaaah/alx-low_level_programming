#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers
 * @n: number
 * Return: void
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
