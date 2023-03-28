#include "main.h"
#include <string.h>
/**
 * puts_half - print the last half
 * @str: the coming string
 * Return: void
 */
void puts_half(char *str)
{
int length;
int i;
length = strlen(str);
if (length % 2 == 0)
{
i = length / 2;
for (; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
else
{
i = (length / 2) - 1;
for (; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
