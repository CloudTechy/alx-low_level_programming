#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate the string
 * @str : string to duplicate
 * Return: A pointer to the str or NULL if it fails
 */
char *_strdup(char *str)
{
char *s;

if (str == NULL)
return (NULL);
s = malloc(sizeof(str));
s = str;
return (s);
}
