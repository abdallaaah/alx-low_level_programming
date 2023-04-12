#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
char *new_str;
int ss1;
int ss2;
ss1 = sizeof(s1);
ss2 = sizeof(s2);
new_str = malloc(ss1 + ss2);
new_str = strcat(s1, s2);
return (new_str);
}
