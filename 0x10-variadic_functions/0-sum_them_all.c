#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - summ all the numbers
 * @n: numbers of int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list ptr;
va_start(ptr, n);
sum = 0;
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
