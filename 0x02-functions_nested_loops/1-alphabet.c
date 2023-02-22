#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}
/**
* print_alphabet - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
