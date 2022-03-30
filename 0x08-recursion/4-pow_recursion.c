#include "main.h"
/**
 * _pow_recursion - Return x's values raised to the power y.
 * @x: char type
 * @y: char type
 * Return: char type
 **/
int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);

else if (y == 0)
return (1);


return (x * _pow_recursion(x, y - 1));

}
