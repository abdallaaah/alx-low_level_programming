#include <stdio.h>
/**
 * main - check the code
 * Return - puthcar word
 */
int main(void)
{
int i=0;
char message[] = "_putchar";
while(message[i] != '\n')
{
putchar(message[i]);
i++;
}
//putchar(message);
putchar(32);
return (0);
}
