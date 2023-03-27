#include <stdio.h>
/**
 * jack_bauer - print time
 * Return: time
 */
void jack_bauer(void)
{
int hour, min;
for (hour = 0; hour < 24; hour++)
{
for (min = 0; min < 60; min++)
{
printf("%02d:%02d\n", hour, min);
}
}
}
