#include "main.h"
#include <stdio.h>
#include <string.h>
char *leet(char *s)
{
int i;
int len;
char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char c;
arr[0] = '4';
arr[4] = '3';
arr[14] = '0';
arr[19] = '7';
arr[11] = '1';
len = strlen(s);
for(i = 0; i < len; i++)
{
c = s[i];
if (c >= 'a' && c <= 'z')
{
s[i] = arr[c - 'a'];
/*printf("the current letter is : %c\n",s[i]);*/
}
if (c >= 'A' && c <= 'Z')
{
s[i] = arr[c - 'A'];
/*printf("the current letter is : %c\n",s[i]);*/
}
}
for (i=0; i< len; i++)
{
printf("%c",s[i]);
}
return NULL;
}
