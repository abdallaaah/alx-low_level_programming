#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strdup(char *str)
{
char *new_str;
if (strdup(str))
{
new_str = strdup(str);
}
else
{
return (NULL);
}
return (new_str);
}
