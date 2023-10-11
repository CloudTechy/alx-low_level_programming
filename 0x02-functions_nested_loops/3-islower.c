#include "main.h"
/**
* _islower - Entry point
* @c: An input character
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
int _islower(int c)
{
char i;
int lower = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
}
