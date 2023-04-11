#include <stdio.h>
#include <stdlib.h>
/**
 * main - multible two arg
 * @argc: argc is the number of arguments
 * @argv: the string we need to use
 * Return: return the string
 */
int main(int argc, char *argv[])
{
int r;
if (argc == 3)
{
r = atoi(argv[1]) * atoi(argv[2]);
printf("%d",r);
}
else
{
printf ("Error\n");
return (1);
}
return (0);
}
