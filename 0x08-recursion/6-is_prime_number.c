#include "main.h"
/**
 * is_prime_number -  Returns the natural square root of a number.
 * @n: int type
 * Return: char type
 **/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime(n, 2));

}

/**
 * is_prime - Entry point
 * Desc: is_prime
 * @n: type int
 * @x: type int
 * Return: Function about prime numbers
 **/
int is_prime(int n, int x)
{
if (x < n)
{
if (n % x == 0)
{
return (0);
}
return (is_prime(n, x + 1));
}
return (1);
}
