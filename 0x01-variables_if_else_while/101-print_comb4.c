#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print combanitaion
 * Return: void
 */
int main(void)
{
int x;
int y;
int z;
y = 1;
z = 2;
for (x = 0; x <= 7; x++)
{
for (; y <= 8; y++)
{
for (; z <= 9; z++)
{
if (x != y && y != z && x != z)
{
putchar(x + 48);
putchar(y + 48);
putchar(z + 48);
if (!(x == 7 && y == 8 && z == 9))
{
putchar(',');
putchar(' ');
}
}
}
z = x + 2;
}
y = x + 1;
}
putchar('\n');
printf("x is equal : %d\n",x);
printf("y is equal : %d\n",y);
printf("z is equal : %d\n",z);
return (0);
}
