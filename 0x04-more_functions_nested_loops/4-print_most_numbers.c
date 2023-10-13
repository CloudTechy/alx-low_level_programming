#include "main.h"

/**
* print_most_numbers -  An entry point
* Description: 'prints the numbers, from 0 to 9,
* except  2 and 4 followed by a new line'
*/
void print_most_numbers(void)
{
char i = '0';

for (; i <= '9'; i++)
{
if (i == '4' || i == '2')
{
continue;
}
_putchar(i);
}
_putchar('\n');
}
