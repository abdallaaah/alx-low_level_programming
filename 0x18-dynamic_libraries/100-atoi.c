#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
int len;
res = 0, signNeg = 0, signPos = 0, i = 0, x = 0;
len = strlen(s);
while (i < len)
{
if (s[i] == 45)
{
signNeg++;
if (s[i+1] >=48 && s[i+1] < 58)
{
break;
}
}
if (s[i] == 43)
{
signPos++;
if (s[i+1] >=48 && s[i+1] < 58)
{
break;
}
}
i++;
}
while (x < len)
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
