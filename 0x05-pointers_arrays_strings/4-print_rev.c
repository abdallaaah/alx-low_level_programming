#include "main.h"
#include <string.h>
/**
 * print_rev - print the string in rev
 * @s: is the sting
 */
void print_rev(char *s)
{
int i;
int length;
length = strlen(s);
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
