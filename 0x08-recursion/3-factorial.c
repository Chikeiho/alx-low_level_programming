#include "main.h"
/**
 * factorial - Return the factorial of a given number.
 * @n: int type
 * Return: char type
 **/
int factorial(int n)
{
if (n >= 1)
{
return (n * factorial(n - 1));
}
else if (n < 0)
return (-1);

else
return (1);
}
