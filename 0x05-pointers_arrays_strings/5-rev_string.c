#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: string will reversed
 */
void rev_string(char *s)
{
int length;
int i;
int j;
char temp;
length = strlen(s);
j = length - 1;
for (i = 0; i < j ; i++)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j--;
}
}
