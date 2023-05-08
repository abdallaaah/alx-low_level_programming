#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - return the index bit
 * @n: the number
 * @index: the index specific
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) & 1);
}
