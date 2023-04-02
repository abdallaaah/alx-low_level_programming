#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print numbers
 * @n: numbers
 * Return: void
 */
void print_times_table(int n)
{
int x;
int y;
int sum;
if (n < 15)
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
sum = x * y;
printf("%d", sum);
if (y != n)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
else if (n > 15)
{
putchar('\n');
}
else if (n < 0)
{
putchar('\n');
}
}
