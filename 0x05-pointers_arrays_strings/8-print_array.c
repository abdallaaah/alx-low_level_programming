#include "main.h"
#include <stdio.h>
/**
 * print_array - print array numbers
 * @a: the array
 * @n: the numbers of array
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (n == 0)
{
printf("\n");
break;
}
if (i + 1 == n && n > 0)
{
printf("%d\n", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
}
