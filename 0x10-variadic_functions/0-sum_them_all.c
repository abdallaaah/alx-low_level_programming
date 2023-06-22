#include "variadic_functions.h"
/**
 * sum_them_all - function to summ all
 * @n: the number of int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
unsigned int i = 0;
int sum = 0;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
