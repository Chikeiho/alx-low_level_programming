#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 * @void: no return
 */

void print_numbers(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
