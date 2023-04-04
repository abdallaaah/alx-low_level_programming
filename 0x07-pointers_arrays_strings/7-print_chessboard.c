#include "main.h"
#include <string.h>
/**
 * print_chessboard - print the chess bord two dim array
 * @a: the array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int x;
int y;
for (x = 0; x < 8 ; x++)
{
for (y = 0; y < 8 ; y++)
{
_putchar(a[x][y]);
}
_putchar('\n');
}
}
