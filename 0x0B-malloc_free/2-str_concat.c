#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two stirng.
 * Desc: _strdup function
 * @s1: char type
 * @s2: char type
 * Return: Return leng
 **/
char *str_concat(char *s1, char *s2)
{
int x = 0, y = 0, f, m, l;
char *leng;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[x] != '\0')

x++;

while (s2[y] != '\0')

y++;
y++;

f = x + y;

leng = malloc(sizeof(char) * f);

if (leng == NULL)
return (NULL);

for (m = 0; m < x; m++)
{
leng[m] = s1[m];
}

for (l = 0; l < y; m++, l++)
{
leng[m] = s2[l];
}

return (leng);

}
