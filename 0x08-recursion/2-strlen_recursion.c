#include "main.h"
/**
*_strlen_recursion - execution
*@s: variable in question
*@counter: the variable to count the length
*Return: integer
*/
int _strlen_recursion(char *s)
{
int counter = 0;
if (*s)
{
counter++;
counter += _strlen_recursion(s+1);
}
else
return (counter);
}
