#include "function_pointerss.h"
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int result;
int res;
if (size <= 0 || array == NULL || cmp == NULL)
return -1;
for (i = 0; i < size; i++)
{
result = cmp(array[i]);
if (result != 0)
{
res = i;
return res;
}
}
return (-1);
}
