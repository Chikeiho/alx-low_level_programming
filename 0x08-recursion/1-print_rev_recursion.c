#include "main.h"
/**
 *_print_rev_recursion - Prints a string in reverse.
 * Desc: _memset
 * @s: char type
 * Return: char type
 **/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
