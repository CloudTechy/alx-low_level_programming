#include "main.h"

/**
* print_diagonal - draws a straight line in the terminal
* @n: an integer parameter
* Description: 'draws a straight line in the terminal'
*/
void print_diagonal(int n)
{
int i = 0;

if (n > 0)
{
for (; i < n; i++)
for (; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
