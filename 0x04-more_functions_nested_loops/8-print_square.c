#include "main.h"
/**
 * print_square - execution
 * @size: size of square
 * Return: size
 */
void print_square(int size)
{
int y, x;
if (size > 0)
{
for (x = 0; x <= size; x++)
{
for (y = 0; y <= size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
