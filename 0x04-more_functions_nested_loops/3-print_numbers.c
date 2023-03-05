#include "main.h"
#include <stdio.h>
/**
* print_numbers -  An entry point
* Description: 'prints the numbers, from 0 to 9, followed by a new line'
*/
void print_numbers(void)
{
char i = '0';

for (; i <= '9'; i++)
{
putchar(i);
}
putchar("\n");
}
