#include "main.h"
#include <stdio.h>

/**
* main - main entry
* Description: ' prints a square, followed by a new line'
* Return: Always 0
*/
int main(void)
{
int i;

for (i = 1; i < 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
printf("Buzz\n");
return (0);
}
