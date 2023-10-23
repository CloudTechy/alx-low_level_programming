#include "main.h" 

/**
 * _strchr - entry function
 * @s: string
 * @c: character to search
 * Description: "locates a character in a string"
 * Return: a char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
