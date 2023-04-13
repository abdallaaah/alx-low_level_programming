#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
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
for (x= 0; x < argc, x++)
{
if (atoi(argv[i]))
{
printf("Error\n");
return (1);
}
}
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) || atoi(argv[i]) != '0')
{
result += atoi(argv[i]);
}
}
}
printf("%d\n", result);
return (0);
}
