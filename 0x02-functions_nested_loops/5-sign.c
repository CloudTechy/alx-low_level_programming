#include "main.h"
/**
* print_sign - Entry point
* @n: An input number
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
int value;

if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}

return (value);
}
