#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 * Desc: creat_array function
 * @size: unsigned int type
 * @c: char type
 * Return: Print result
 **/
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b;

if (size == 0)
return (NULL);

a = malloc(sizeof(char) * size);

if (a == NULL)
return (NULL);
for (b = 0; b < size; b++)

a[b] = c;

return (a);
}
