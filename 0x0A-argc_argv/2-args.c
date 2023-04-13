#include <stdio.h>
/**
 * main - return the agsv words
 * @argc: paramters count
 * @argv: the string it self
 * Return: return the words
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
