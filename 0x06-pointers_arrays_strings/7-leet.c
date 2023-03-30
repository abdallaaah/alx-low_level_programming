#include "main.h"
#include <string.h>
/**
 * leet - encode function
 * @x: string
 * Return: return new string
 */
char *leet(char *x)
{
int i;
while (x[i] != '\n')
{
if (x[i] == 97 || x[i] == 65)
{
x[i] = 52;
}
else if (x[i] == 101 || x[i] == 69)
{
x[i] = 51;
}
else if (x[i] == 79 || x[i] == 111)
{
x[i] = 48;
}
else if (x[i] == 84 || x[i] == 116)
{
x[i] = 56;
}
else if (x[i] == 76 || x[i] == 108)
{
x[i] = 49;
}
i++;
}
return (x);
}
