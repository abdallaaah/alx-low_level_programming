#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers - print numbers
 * Return: return from 1 to 9
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(48 + i);
}
_putchar('\n');
}
