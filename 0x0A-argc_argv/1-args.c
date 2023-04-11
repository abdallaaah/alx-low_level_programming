#include <stdio.h>
/**
 * main - return the count of argc
 * @argc: the number count
 * @argv: the string
 * Return: the number of argc
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
