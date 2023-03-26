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
for (i = 0; i < n; i++)
{
if (i <= 0)
{
_putchar('\n');
}
_putchar('_');
}
putchar('\n');
}
