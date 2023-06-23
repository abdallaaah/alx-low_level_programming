#include "variadic_functions.h"
/**
 * print_strings - fuction to print numbers
 * @separator: sepaerate string
 * @n: niumber of argumnest
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i = 0;
va_start(ptr, n);
if (separator == NULL)
{
for (i = 0; i < n; i++)
{
printf("%s", va_arg(ptr, char *));
}
}
else
{
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%s", va_arg(ptr, char *));
}
else
printf("%s%s", va_arg(ptr, char *), separator);
}
}
va_end(ptr);
printf("\n");
}
