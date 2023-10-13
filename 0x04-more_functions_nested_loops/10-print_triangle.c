#include "main.h"

/**
* print_triangle - main entry
* @size: an integer parameter
* Description: ' prints a triangle, followed by a new line'
*/
void print_triangle(int size)
{
int i = 1;
int j;
int k;

if (size > 0)
{
for (; i <= size; i++)
{
for (j = (size - i); j > 0; j--)
{
_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}

