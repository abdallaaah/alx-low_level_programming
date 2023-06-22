#include "calc.h"
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1;
int num2;
char *op;
op = argv[2];
/*if (args != 4)
{
printf("Error\n");
exit(98);
}*/

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 && strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0 && strcmp(argv[2], "%") != 0)
{
printf ("Error\n");
exit(99);
}
printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
