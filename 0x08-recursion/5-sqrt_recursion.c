#include "main.h"
#include <stdio.h>
#include <math.h>
int _sqrt_recursion(int n)
{
return (_srq(n,1));
}

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
return (_srq(n,i + 1));
}
}
}
