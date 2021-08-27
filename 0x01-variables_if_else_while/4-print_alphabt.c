#include <stdlib.h>
#include <stdio.h>
/**
 *main - execution
 *Return: o
 */
int main (void)
{
char alpha;
for (alpha='a'; alpha <= 'z'; alpha++)
{
if (alpha != 'q' && alpha != 'e')
putchar(alpha);
}
putchar('\n');
return (0);
}
