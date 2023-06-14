#include <stdio.h>
/**
 * main - print the argc
 * @argc: the count
 * @argv: the array
 * Return: it is void
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; argv; i++)
{
if (i == 0)
{
printf("%d\n", argc - 1);
break;
}
}
return (0);
}
