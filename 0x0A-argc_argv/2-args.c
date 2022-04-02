#include "main.h"
#include <stdio.h>
/**
 * main - Mian
 * @argc: int type
 * @argv: char type
 * Return: printis files name
 **/
int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
