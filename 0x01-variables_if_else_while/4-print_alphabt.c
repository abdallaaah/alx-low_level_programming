#include <stdio.h>

/**
 * main - the main
 * Return: always(Sucess)
 */
int main(void)

{

char i;

for (i = 'a'; i <= 'z'; i++)
{
	if (i != 'q')
	{
	if( i != 'e')
		putchar (i);
	}
}
putchar ('\n');
return (0);

}
