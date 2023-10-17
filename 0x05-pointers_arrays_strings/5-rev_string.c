#include "main.h"
#include <string.h>
/**
* rev_string - entry function
* @s : "string parameter"
* description : "prints a string, followed by a new line,
* to stdout in reverse order"
* Return: "nothing"
*/

void rev_string(char *s)
{
int len = 0, i = 0;
char j;

while (s[len] != '\0')
len++;

while (i < len--)
{
j = s[i];
s[i++] = s[len];
s[len] = j;
}
}
