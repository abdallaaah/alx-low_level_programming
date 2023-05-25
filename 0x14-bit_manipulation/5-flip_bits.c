#include "main.h"
/**
 * flip_bits - good function
 * @n: rhe long int
 * @m: the long m
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
while (diff != 0)
{
count += diff & 1;
diff >>= 1;
}
return (count);
}
