#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* Description: 'print alphabet from a - z'
* Return: Always 0 (Success)
*/
int main(void)
{
char i;

/* your code goes there */
for (i = '0';
i < '9' + 1; i++)
{
putchar((int) i);
}
putchar('\n');
return (0);
}
