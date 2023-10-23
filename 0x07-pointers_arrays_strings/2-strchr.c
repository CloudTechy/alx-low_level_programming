#include <stdio.h>

/**
 * _strchr - entry function
 * @s: string
 * @c: character to search
 * Description: "locates a character in a string"
 * Return: a char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
		return ('\0');

}
