#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - Define the last digit
 * Return: always(Success)
 */

int main(void)
{
int x;
int y;
y = 1; 
for (x = 0; x <= 8; x++)
{
for ( ; y <= 9; y++)
{
if (x != y)
{
putchar(x + 48);
putchar(x + 48);
if (!(x == 8 && y == 9))
{
putchar(',');
putchar(' ');
}
}
}
y = x + 1;
}
putchar('\n');
return (0);
}
