#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function to print numbers follwed by seprator
 * @n: number of integers
 * @separator: seprator we will use
 * Return: void nothing to retuen
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int temp;
va_list ptr;
va_start(ptr, n);
if (separator != NULL)
{
for (i = 0; i < n; i++)
{
temp = va_arg(ptr, int);
if (i == n - 1 && separator != NULL)
{
printf("%d", temp);
}
else
{
printf("%d%s", temp, separator);
}
}
printf("\n");
va_end(ptr);
}
}
