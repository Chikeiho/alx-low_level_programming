#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - Do somethng
 * Desc: alloc_grid function
 * @width: int type
 * @height: int type
 * Return: Return
 **/
int **alloc_grid(int width, int height)
{
int i, j, leng, **x;
if (width <= 0 || height <= 0)
return (NULL);

x = (int **)malloc(sizeof(int *) * height);

if (x == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
x[i] = (int *)malloc(sizeof(int) * width);


if (x[i] == NULL)
{
for (j = 0; j < i; j++)
free(x[j]);
free(x);

return (NULL);

}
leng = 0;
for (j = 0; j < width; j++)
x[i][j] = leng;

}
return (x);
}
