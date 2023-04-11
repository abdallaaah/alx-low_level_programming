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
(void)argc;
if (argc == 3)
{
printf("Error\n");
return (1);
}
r = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", r);
return (0);
}
