#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Define the last digit
 * Return : always(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	if ( n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	if ( n == 0)
        {
                printf("Last digit of %d and is zero\n", n);
        }
	if ( n < 6 && n != 0)
        {
                printf("Last digit of %d and is less than 6 and not 0\n", n);
        }

	return (0);
}
