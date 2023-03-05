#include "main.h"

/**
* more_numbers -  An entry point
* Description: 'prints the numbers, from 0 to 9 10 times,
* followed by a new line'
*/
void more_numbers(void)
{
for (i = 0; i <= 10; i++)
{
for (j = 0; j < 14; j++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}

}
