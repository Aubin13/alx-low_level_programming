#include "main.h"
/**
*factorial - execution
*
*
*Return: integer
*/
int factorial(int n)
{
int fact;
if (n == 0)
{
fact = 1;
}
else if (n < 0)
{
return (-1);
}
else
{
fact = fact * factorial (n-1);
}
return (fact);
}
    
