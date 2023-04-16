#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *rot13(char *s)
{
char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int i;
int len;
int c;
int ii;
len = strlen(s);
for (i = 0; i < len; i++)
{
c = s[i];
if (c >= 'a' && c <= 'z')
{
ii = 0;
while(c != arr[ii])
{
ii++;
}
if (ii < 13)
{
ii = ii + 13;
}
else
{
ii = ii - 13;
}
s[i] = arr[ii];
}
}
return s;
}
