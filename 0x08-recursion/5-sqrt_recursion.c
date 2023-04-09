#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - check square version
 * @n: number we wil find
 * Return: int nuber
 */
int _sqrt_recursion(int n)
{
return (_srq(n, 1));
}
/**
 * _srq - complete the first funciotn with rec
 * @n: the number we pass
 * @i: the numbers we try
 * Return: return the number
 */
int _srq(int n, int i)
{
int sqrnum;
sqrnum = i * i;
if (sqrnum > n)
{
return (-1);
}
else
{
if (sqrnum == n)
{
return (i);
}
else
{
return (_srq(n, i + 1));
}
}
}
