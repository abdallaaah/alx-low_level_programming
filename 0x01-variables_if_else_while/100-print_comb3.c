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
for (x = 0; x <= 8; x++)
{
for (y = 1; y <= 9; y++)
{
putchar(x + 48);
putchar(y + 48);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
