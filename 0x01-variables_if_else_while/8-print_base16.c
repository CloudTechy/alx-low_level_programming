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
int j;

/* your code goes there */
for (i = '0';
i <= '9'; i++)
{
putchar(i);
}
for (j = 'a';
j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
