#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - captalize everu first char
 * @x: the string we will captalize
 * Return: return the string after captlizing
 */
char *cap_string(char *x)
{
int i;
int len;
len = strlen(x);
for (i = 0; i < len; i++)
{
if ((i > 1) && (x[i - 1] == ' ' || x[i - 1] == ',' || x[i - 1] == ';'))
{
x[i] = toupper(x[i]);
}
if ((i > 1) && (x[i - 1] == '.' || x[i - 1] == '!' || x[i - 1] == '?'))
{
x[i] = toupper(x[i]);
}
if ((i > 1) && (x[i - 1] == '"' || x[i - 1] == '(' || x[i - 1] == ')'))
{
x[i] = toupper(x[i]);
}
if ((i > 1) && (x[i - 1] == '}' || x[i - 1] == '\n' || x[i - 1] == '\t'))
{
x[i] = toupper(x[i]);
}
if ((i > 1)(x[i - 1] == '{' || x[i - 1] == '{'))
{
x[i] = toupper(x[i]);
}
}
return (x);
}
