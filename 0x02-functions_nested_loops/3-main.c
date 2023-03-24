#include <ctype.h>
#include "main.h"
/**
 *main - check the code
 *@r: delclare
 *Return: Always zero
 */
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
