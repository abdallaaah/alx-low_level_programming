#include "main.h"
#include <stdlib.h>
/**
 * _atoi: convert
 * @s: ssr r 
 * Return: return number
 */
int _atoi(char *s)
{
int res;
int i;
int x;
int sign;
res = 0;
sign = 1;
i = 0;
x = 0;
while (s[i] != '\0')
{
if (s[i] == 45)
{
sign = sign * -1;
}
i++;
}
while (s[x] != '\0')
{
if (s[x] >= 48 && s[x] < 58)
{
res = res * 10 + s[x] - '0';
if (!(s[x+1] >= 48 && s[x] < 58))
{
break;
}
}
x++;
}
if (sign == 1)
{
return (res);
}
else
{
return (-res);
}
}
