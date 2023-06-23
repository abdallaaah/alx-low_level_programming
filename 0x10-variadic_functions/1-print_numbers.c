#include "variadic_functions.h"
/**
 * print_numbers - fuction to print numbers
 * @separator: sepaerate string
 * @n: niumber of argumnest
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i = 0;
va_start(ptr, n);
if (separator == NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, int));
}
}
else
{
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d", va_arg(ptr, int));
}
else
printf("%d%s", va_arg(ptr, int), separator);
}
printf("\n");
}
}
