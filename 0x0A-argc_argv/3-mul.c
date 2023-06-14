#include <stdio.h>
#include <stdlib.h>
/**
 * main - mult two numbers
 * @argc: count of argv
 * @argv: the array
 * Return: void
 */
int main(int argc, char *argv[])
{
int res = 0;
int num1 = 0, num2 = 0;
if (argc < 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
res = (num1 *num2);
printf("%d\n", res);
return (0);
}
