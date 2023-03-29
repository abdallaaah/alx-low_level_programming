#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - change the letters to upper case
 * @x: the array
 * Return: return the upper cases
 */
char *string_toupper(char *x)
{
int i;
int len;
len = strlen(x);
for (i = 0; i < len; i++)
{
x[i] = toupper(x[i]);
}
return (x);
}
