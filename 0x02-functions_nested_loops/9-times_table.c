#include "main.h"
/**
 * times_table(void) - execution
 * Return: 0
 */
void times_table(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y <= 9; y++)
{
_putchar(x * y);
_putchar(',');
}
_putchar('\n');
}
}
