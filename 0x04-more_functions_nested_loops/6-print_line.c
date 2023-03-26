#include "main.h"
#include <stdio.h>
/**
 * print_line - print all line
 * @n: declare
 * Retuen: return line
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar('_');
if (i == n)
{
_putchar('\n');
}
}
}
}
