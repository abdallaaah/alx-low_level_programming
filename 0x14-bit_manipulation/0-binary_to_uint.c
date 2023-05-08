#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned
 * @b: the string of binaries
 * Return: return the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '1' || b[i] == '0')
{
num = num << 1;
if (b[i] == '1')
{
num = num | 1;
}
}
else
{
return (0);
}
}
return (num);
}
