#include "main.h"

/**
* _puts - entry function
* @str : "string parameter"
* description : "prints a string, followed by a new line,
* to stdout"
* Return: "nothing"
*/

void _puts(char *str)
{
int len = 0;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
