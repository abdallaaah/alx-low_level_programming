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
int signNeg;
int signPos;
res = 0, signNeg = 0, signPos = 0, i = 0, x = 0;
while (s[i] != '\0')
{
if (s[i] == 45)
{
signNeg =+ 1;
}
if (s[i] == 43)
{
signPos =+ 1;
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
if (signPos >= signNeg)
{
return (res);
}
else
{
return (-res);
}
}
