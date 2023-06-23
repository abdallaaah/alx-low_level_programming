#include "variadic_functions.h"
/**
 * print_all - print any thing
 * @format: sting to
 * Return: no thing
 */
void print_all(const char * const format, ...)
{
int i = 0;
int num = 0;
double numm = 0;
char x;
char *xx;
va_list arg;
va_start(arg, format);
while (format && format[i])
{
while (format[i])
{
switch(format[i])
{
case 'c':
x = va_arg(arg, int);
printf("%c", x);
break;
case 'i':
num = va_arg(arg, int);
printf("%i", num);
break;
case 'f':
numm = va_arg(arg, double);
printf("%f", numm);
break;
case 's':
xx = va_arg(arg, char *);
if (xx == NULL)
{
xx = "(nil)";
}
printf("%s", xx);
break;
}
if (format[i + 1] != '\0' && (format[i] == 's' || format[i] == 'i' || format[i] == 'c' || format[i] == 'f'))
printf(", ");
i++;
}
}
printf("\n");
va_end(arg);
return;
}
