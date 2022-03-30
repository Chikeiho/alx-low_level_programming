#include "main.h"
/**
 * _sqrt_recursion -  Returns the natural square root of a number.
 * @n: int type
 * Return: char type
 **/
int _sqrt_recursion(int n)
{
return (_sqrt_rec(n, 1));
}
/**
 * _sqrt_rec - Second entry.
 * @n: int type
 * @x: int type
 * Return: x in square value
 **/
int _sqrt_rec(int n, int x)
{
if (n <= 0)
return (-1);

if (x * x > n)

return (-1);

if (n == x * x)
return (x);

return (_sqrt_rec(n, x + 1));
}
