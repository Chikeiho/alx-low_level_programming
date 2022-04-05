#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - Do somethng
 * Desc: argstostr function
 * @ac: int type
 * @av: int type
 * Return: Return
 **/
char *argstostr(int ac, char **av)
{
int i, j, x = 0, y = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)

y++;
y++;

}
y++;
s = malloc(y *sizeof(char));
if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[x] = av[i][j];
x++;
}
s[x] = '\n';
x++;
}
s[x] = '\0';
return (s);
}
