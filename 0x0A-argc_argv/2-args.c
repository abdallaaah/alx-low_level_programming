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
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
