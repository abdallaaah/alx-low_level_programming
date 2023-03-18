#include <stdio.h>

/**
 * main - the main
 * Return: always(Sucess)
 */
int main(void)

{

int i;

for (i = 0; i < 10; i++)
{
putchar(48 + i);
if (i != 9)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);

}
