#include "main.h"
#include <string.h>

/**
*  print_rev- entry function
* @str : "string parameter"
* description : "prints a string, followed by a new line,
* to stdout in reverse"
* Return: "nothing"
*/

void print_rev(char *str)
{
int len = strlen(str);

while (len)
{
_putchar(str[--len]);
}
_putchar('\n');
}
