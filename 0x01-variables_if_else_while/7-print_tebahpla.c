#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* Description: 'print alphabet from a - z and A-Z'
* Return: Always 0 (Success)
*/
int main(void)
{
char i;

/* your code goes there */
for (i = 'z';
i > ('a' - 1); i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
