#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - Do somethng
 * Desc: free_grid function
 * @grid: int type
 * @height: int type
 * Return: Return
 **/
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
