#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string with a new memory value.
 * Desc: _strdup function
 * @str: char type
 * Return: Return the new string
 **/
char *_strdup(char *str)
{
int i = 0, x;
char *s;
if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;
i++;

s = malloc(sizeof(char) * i);
if (s == NULL)
{
return (NULL);
}

for (x = 0; x < i; x++)
{
s[x] = str[x];
}
return (s);
}
