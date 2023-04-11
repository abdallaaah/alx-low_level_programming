#include <stdio.h>
#include <stdlib.h>
/**
 * main: the main function
 * @argc: argc count
 * @argv: the string
 * Return: number plus
 */
int main(int argc, char *argv[])
{
int i;
int result;
if (argc <= 1)
{
printf("Error\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
{
result += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", result);
}
return (0);
}
