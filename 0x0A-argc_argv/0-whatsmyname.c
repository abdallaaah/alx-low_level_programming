#include <stdio.h>
/**
 * main - print the program name
 * @argc: count of argv
 * @argv: the array it self
 * Return: void
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
if (i == 0)
{
printf("%s\n", argv[0]);
break;
}
}
return (0);
}
