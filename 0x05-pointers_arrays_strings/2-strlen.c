#include <string.h>
#include <stdio.h>

/**
 * _strlen - the main function
 * @s : pointer to a char
 * Description: "returns the length of a string"
 * Return: int
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
return (len);
}
