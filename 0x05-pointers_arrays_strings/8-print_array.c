#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
int i=0;
for (i = 0; i < n; i++)
{
if (i+1 == n)
{
printf("%d\n",a[i]);
}
printf("%d, ",a[i]);
}
}
