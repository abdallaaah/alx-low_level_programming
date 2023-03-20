#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * mian - make a compination
 * return: always(succes)
 *
 */
int main(void)
{
int i;
int z;
for(i=0;i<=9;i++)
{
	for(z=1;z<=9;z++)
	{
		putchar(48+i);
		putchar(48+z);

	}

}
return (0);
}
