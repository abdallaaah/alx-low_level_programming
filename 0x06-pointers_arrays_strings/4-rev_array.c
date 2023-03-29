#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse array
 * @a: the array
 * @n: the size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int temp;
int i;
temp = 0, i = 0;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
