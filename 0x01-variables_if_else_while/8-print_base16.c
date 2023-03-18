#include <stdio.h>

/**
 * main - the main
 * Return: always(Sucess)
 */
int main(void)

{

int i;
char a;

for (i = 0; i < 10; i++)
{
putchar(48 + i);
}
for (a = 'a'; a < 'g'; a++)
{
putchar(a);
}
putchar ('\n');
return (0);

}
