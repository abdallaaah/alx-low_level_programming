#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings with varadic function
 * @n: number of strings
 * @separator: sepating woth
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
const char *str;
int flag;
flag = 0;
va_start(ptr, n);
if (separator == NULL)
{
return;
}
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
flag = 1;
}
str = va_arg(ptr, const char *);
if (str == NULL)
{
printf("(nil)");
}
else if (flag == 0)
{
printf("%s%s", str, separator);
}
else if (separator != NULL && i == n - 1 && flag == 1)
{
printf("%s", str);
}
}
printf("\n");
va_end(ptr);
}
