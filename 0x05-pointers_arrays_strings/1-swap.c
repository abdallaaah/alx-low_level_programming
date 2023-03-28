#include "main.h"
/**
 * swap_int - swap two integerans
 * @a: first pointer
 * @b: second one
 */
void swap_int(int *a, int *b)
{
int z = 0;
z = *a;
*a = *b;
*b = z;
}
