#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - print
 * @str: string
 */
void puts2(char *str)
{
int length;
int i;
length = strlen(str);
for (i=0; i < length - 1; i+=2)
{
_putchar(str[i]);
}
_putchar('\n');
}
