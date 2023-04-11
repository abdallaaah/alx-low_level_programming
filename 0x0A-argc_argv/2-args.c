#include <stdio.h>
/**
 * main - return argc
 * @argc: muber of arguments
 * @argv: string with 
 * Return: return argc
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
